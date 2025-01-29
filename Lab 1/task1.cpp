#include <iostream>
#include <iomanip>

float  task1(float x, float y){
    return (x * ((5*x/2) + (6*y))) - (((3*y)-1)/4);  
}

int main(){
    float x,y;
    std::cout << "\t";
    for (x=0;x<6;x++){
        std::cout<< "| x = "<< x;
    }
    std::cout<<"\n";
    for(y=0;y<6;y++){
        std::cout<<std::fixed << std::setprecision(0)<<"| y = "<< y<< " | " ;
        for(x=0;x<6;x++){
            std::cout <<std::fixed << std::setprecision(2) << task1(x,y)<< "| "; 
        }
        std::cout << "\n";
    }
    return 0;
}
