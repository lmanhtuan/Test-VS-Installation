#pragma once
#include <string>
class Student
{
private:
	int id;
	int age;
public:
	Student(void);
	Student(int id, int age);
	~Student(void);

	int getId();
};

