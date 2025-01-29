#include <iostream>
#include <string>
int factorial(int a){
    int n=1;
    while(a){
        n*=a;
        a--;
    }
    return n;
}

int L1_norm(int a,int b){
    if(a > b) return a-b;
    else return b-a;
}

std::string isEven(int a){
    if(a%2) return "ODD";
    else return "EVEN" ;
}

int main(){
    int a = 1,b=10,c=-10,t=77;
    std::cout<< factorial(a) << '\n';
    std::cout<< L1_norm(a,b) << '\n';
    std::cout<< isEven(c) << '\n';
    std::cout<<isEven(t) << '\n';
    return 0;
}
    

