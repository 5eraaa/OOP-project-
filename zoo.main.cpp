#include<iostream>
#include "zoo.h"
#include<string>
int main()
{
	string operate;
	cout << "Enter your operation :";
	cin >> operate;	  
	Zoo_Operation * operation;
	if (operate == "Feeding") {
		operation = new Feeding_operation("animals", 2, "morning", true);
		operation->manage_operation();
		delete operation;
	}
	else if (operate == "Ticketing") {
		operation = new Ticketing_operation("the", 70);
		operation->manage_operation();
		delete operation;
	}
	else if (operate == "Maintanenance") {
		operation = new Maintenance_operation("clean animal place", true);
		operation->manage_operation();
		delete operation;
	}
	else cout << "Invalid operation type provided.\n";
	return 0;
}


