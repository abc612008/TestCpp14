#include <memory>
#include <iostream>
int main(){
    auto m=std::make_unique<int>();
    auto x=[](auto a, auto b){
    	return a+b;
    };
    std::cout<<x(2.5, 2.6);
}

