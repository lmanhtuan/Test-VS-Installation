// GitTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Student.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Enter infors;";
	int i, a;
	cin >>i >> a;
	Student *st = new Student(i,a);
	cout << "Id:" << st->getId();

	return 0;
}

