#include <iostream>
#include <iomanip>
#include "employee.h"

using namespace std;

int main() {

	//Creates Rebecca and outputs her information. Note: Vacation days is not a whole number as getting an entire day
	// or more of vacation days per week is extremely unlikely.
	professional Rebecca;
	cout << "Rebecca's weekly pay: " << Rebecca.getWeekly() << endl;
	cout << "Rebecca's weekly healthcare contribution: " << Rebecca.getHealthCare() << endl;
	cout << "Rebecca's weekly accumulation of vacation days: " << Rebecca.getVacDays() << endl;

	cout << endl << endl;

	//Creates John and outputs his information. Note: Vacation days is not a whole number as getting an entire day
	// or more of vacation days per week is extremely unlikely. John also must have his hoursWorked and hourlyRate set
	// as he is a nonprofessional worker.
	nonprofessional John2;
	John2.hoursWorked = 10;
	John2.hourlyRate = 20;
	cout << "John's weekly pay: " << John2.getWeekly() << endl;
	cout << "John's weekly healthcare contribution: " << John2.getHealthCare() << endl;
	cout << "John's weekly accumulation of vacation days: " << John2.getVacDays() << endl;

	
}