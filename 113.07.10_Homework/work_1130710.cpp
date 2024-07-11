#include <iostream>
#include <string>
#include <iomanip>

struct Student {
    std::string name;
    char department;
    int test1;
    int test2;
    float average;
};

int main() {
    Student student;

    std::cout << "Please input your name: ";
    std::getline(std::cin, student.name);

    std::cout << "Please select your department (a:CS b:Bio c:Math): ";
    std::cin >> student.department;

    std::cout << "Please input your score on test 1: ";
    std::cin >> student.test1;

    std::cout << "Please input your score on test 2: ";
    std::cin >> student.test2;

    student.average = (student.test1 + student.test2) / 2.0;

    std::cout << "+---------------------+----------+------+------+-------+\n";
    std::cout << "|        Name         |Department|Test 1|Test 2|Average|\n";
    std::cout << "+---------------------+----------+------+------+-------+\n";
    std::cout << "|"
              << std::setw(20) << student.name << "|"
              << std::setw(10) << student.department << "|"
              << std::setw(6) << student.test1 << "|"
              << std::setw(6) << student.test2 << "|"
              << std::setw(8) << std::fixed << std::setprecision(2) << student.average << "|\n";
    std::cout << "+---------------------+----------+------+------+-------+\n";

    return 0;
}
