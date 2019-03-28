#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "student.h"
#include <ctime>

Student::Student(std::string last_name, std::string name) {
	Student::last_name = last_name;
	Student::name = name;
}

Student::Student(std::string name, int year_of_birth) {
	Student::name = name;
	Student::year_of_birdth = year_of_birdth;
	
	time_t rawtime;
	struct tm * timeinfo;
	time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	int year_now = 1900 + timeinfo->tm_year;

	std::cout << "Student that has name is " << Student::get_name() << " is " << year_now - year_of_birth << " year old." << std::endl;

}

std::string Student::get_name() {
	return Student::name;
}

