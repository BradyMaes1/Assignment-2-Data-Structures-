
#pragma once
#include <iostream>

using namespace std;

class Employee{

public:

	float weeklySalary;
	float healthCareCont;
	float vacDays;

	virtual float getWeekly() = 0;
	virtual float getHealthCare() = 0;
	virtual float getVacDays() = 0;


};


class professional: public Employee{

public:

	float getWeekly();

	float getHealthCare();
	

	float getVacDays();

};


class nonprofessional: public Employee{

public:
	float hoursWorked = 40;
 	float hourlyRate = 15;

	float getWeekly();

	float getHealthCare();

	float getVacDays();

};
