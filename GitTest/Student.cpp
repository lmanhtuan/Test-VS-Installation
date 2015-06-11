#include "StdAfx.h"
#include "Student.h"


Student::Student(void)
{
}

Student::Student(int id, int age)
{
	this->id = id;
	this->age = age;
}

Student::~Student(void)
{
}

int Student::getId()
{
	return this->id;
}
