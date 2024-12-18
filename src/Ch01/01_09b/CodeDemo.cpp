// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>

int main(){
    std::string name;
    std::cout << "Hi There!" << std::endl;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hi there " << name;

    std::cout << std::endl << std::endl;
    return 0;
}