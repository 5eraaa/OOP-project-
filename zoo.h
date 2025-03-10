#ifndef _Zoo_h_
#define _Zoo_h_
#include<iostream>
#include<string>
using namespace std;
class Zoo_Operation {
public:
	virtual void  manage_operation() = 0;
};
class Feeding_operation : public  Zoo_Operation {
private:
	string details;
	int number;
	string Time_Of_Day;
	bool isUrgent;
public:
	Feeding_operation(string thedetails, int no, string morning, bool is);
	void  manage_operation() override;
};

class Ticketing_operation : public  Zoo_Operation {
private:
	string details;
	int number;
public:
	Ticketing_operation(string thedetails, int no);
	void  manage_operation() override;
};
class Maintenance_operation : public Zoo_Operation {
private:
	string details;	bool isUrgent;
public:
	Maintenance_operation(string thedetails, bool is);
	void manage_operation() override;
};
#endif