#include "zoo.h"
Feeding_operation::Feeding_operation(string thedetails, int no, string morning, bool is)
{
	details = thedetails;
	number = no;
	Time_Of_Day = morning;
	isUrgent = is;
}
void Feeding_operation::manage_operation()  {
	cout << "Welcome to the Funny Zoo Operations Manager!\n";
	cout << " feeding " << details << ".\n";
	if (Time_Of_Day == "morning") { cout << "prepeare breakfast for\t" << number << "\tanimals.\n"; }
	else if (Time_Of_Day == "evening") { cout << "prepeare dinner for" << number << "animals.\n"; }
	if (isUrgent) cout << "URGENT: Immediate attention needed!\n";
}
Ticketing_operation::Ticketing_operation(string thedetails, int no)
{
	details = thedetails;
	number = no;
}
void Ticketing_operation::manage_operation()  {
	cout << "Welcome to Funny Zoo Operations Manger!\n";
	cout << "Processing" << details << "tickets.\n";
	if (number > 50) { cout << "Group discount applied for\t" << number << "\ttickets.\n"; }
}
Maintenance_operation::Maintenance_operation(string thedetails, bool is)
{
	string details = thedetails;
	bool isUrgent = is;
}
void Maintenance_operation::manage_operation()  {
	cout << "Welcome to Funny Zoo Operations Manger!\n";
	cout << "Maintanince request: " << details << "tickets.\n";
	if (isUrgent) { cout << "Urgent : priortize this maintenance task.\n"; }
}