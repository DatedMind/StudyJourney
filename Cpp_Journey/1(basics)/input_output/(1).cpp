#include <iostream>
#include <iomanip>
#include <string>

int main () {

    std::string name;
    int age;

    std::cout << "Your name: ";
    std::getline(std::cin, name);

    std::cout << std::endl;
    
    std::cout << "Your age:";
    std::cin >> age; 

    std::cout << "Name: " << name
    << std::endl;
    std::cout << "Age: " << age;

}