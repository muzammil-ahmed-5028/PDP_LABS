#include <iostream>
#include <string>
#include <memory>
#include <cctype>

enum characteristics{
        CAPITAL,
        SMALL,
        NUMBER
};         
std::unique_ptr<int[]>  task2(std::string input){
    std::unique_ptr<int[]> p(new int[2]);
    for (auto const& c: input){
        if(std::isupper(c)){
            p[CAPITAL]++;
        }
        else if(std::islower(c)){
            p[SMALL]++;
        }
        else if(std::isdigit(c)){
            p[NUMBER]++;
        }
    }
    return p;
}


int main(){
    std::string input;
    std::unique_ptr<int[]> p;
    std::cout<< "ENTER STRING: ";
    std::getline(std::cin,input);
    p = task2(input);
    std::cout<< "Capital Letters = " << p[CAPITAL] << '\n';
    std::cout<< "Small Letters = " << p[SMALL] << '\n';
    std::cout<< "Digits  = " << p[NUMBER] << '\n';
    return 0;
}


