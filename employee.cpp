#include <iostream>
#include "employee.h"

using namespace std;

//professional derived class function implementation

float professional::getWeekly(){
		weeklySalary = 3300;
		return weeklySalary;
	}

float professional::getHealthCare(){
		healthCareCont = .15 * 3300; //Roughly 15% of their earnings are contributed to their healthcare.
		return healthCareCont;
	}

float professional::getVacDays(){
		vacDays = .5;
		return vacDays;
	}


//nonprofessional derived class function implementation

float nonprofessional::getWeekly(){
		weeklySalary = hoursWorked * hourlyRate; //the salary is equivalent to their hours * their rate;
		return weeklySalary;
	}

float nonprofessional::getHealthCare(){
		healthCareCont = .15 * (hoursWorked * hourlyRate) ;
		return healthCareCont;
	}

float nonprofessional::getVacDays(){
		vacDays = .02 * hoursWorked; //2% of days worked going towards vacations day is a realistic amount
		return vacDays;
	}