#include <iostream>
#include <string>
#include <iomanip>

struct Student {
    std::string name;
    std::string school;
    // int test1;
    // int test2;
    // float average;
};

int main() {
    Student student;

    std::cout << "Enter your name: ";
    std::getline(std::cin, student.name);

    std::cout << "Enter your gradution school: ";
    std::cin >> student.school;

    // std::cout << "Please input your score on test 1: ";
    // std::cin >> student.test1;

    // std::cout << "Please input your score on test 2: ";
    // std::cin >> student.test2;

    // student.average = (student.test1 + student.test2) / 2.0;

    std::cout << "+---------------------+\n";
    std::cout << "|";
    std::cout << std::setw(12) << student.name << std::setw(12) <<"|\n";
    std::cout << "|";
    std::cout << std::setw(12) << student.school << std::setw(12) << "|\n";
    
    std::cout << "+---------------------+\n";
            


    return 0;
}
