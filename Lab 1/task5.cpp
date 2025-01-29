#include <iostream>
#include <memory>
#include <cstdlib>
#include <ctime>

constexpr int randLimit = 100;

int ** initializeMatrix(int rows,int cols){
    srand(time(NULL));
    int **m = nullptr;
    m = new int*[rows];
    for (int i=0;i<rows;i++){
        m[i] = new int[cols];
    }
    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            m[i][j] = rand() %randLimit;
        }
    }
    return m;
}

void printMatrix(int** m,int rows, int cols){
    for(int i=0;i<rows;i++){
        std::cout<< "| ";
        for(int j=0;j<cols;j++){
            std::cout<< m[i][j] << "   ";
        }
        std::cout<<" |";
        std::cout<<'\n';
    }
}

int** multiplyMatrix(int **a, int rowA,int colA, int **b,int colB ){
    int **c = initializeMatrix(rowA,colB);
    for(int i=0;i<rowA;i++){
        for(int j=0;j<colB;j++){
            c[i][j] = 0;
            for(int k=0;k<colA;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

void deleteMatrix(int**m,int rows){
    for(int i=0;i<rows;i++){delete [] m[i];}
    delete [] m;
}

int main(){
    int **a = nullptr,**b = nullptr, **c = nullptr;
    int rowA = 4,colA = 3, rowB = 3,colB = 4;
    a = initializeMatrix(rowA,colA);
    b = initializeMatrix(rowB,colB);
    c = multiplyMatrix(a,rowA,colA,b,colB);
    printMatrix(b,rowB,colB);
    printMatrix(a,rowA,colA);
    printMatrix(c,rowA,colB);
    deleteMatrix(a,rowA);
    deleteMatrix(b,rowB);
    deleteMatrix(c,rowA);
}
