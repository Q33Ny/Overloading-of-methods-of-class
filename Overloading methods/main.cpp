#include "student.h"
#include <iostream>
#include <string>
int main() {
	std::cout << "Program is overloading methods v 1.0" << std::endl;
	std::string name;
	std::string last_name;
	int year_of_birth;
	std::cout << "Input name of student: ";
	getline(std::cin, name);
	std::cout << "Input year of birth of student: ";
	std::cin >> year_of_birth;

	Student *student = new Student(name, year_of_birth);

	return 0;

}