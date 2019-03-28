#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student {
public:

	Student(std::string, std::string);
	Student(std::string, int);
	std::string get_name();

private:
	std::string last_name;
	std::string name;
	int year_of_birdth;
};
#endif STUDENT_H