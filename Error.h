#pragma once
#include <string>
#include <iostream>
using namespace std;
class Error
{
public:
	string statement;
	Error(string u_statement) { statement = u_statement; };
	~Error() {};
	string descriotion_of_the_error() { cout << statement << endl; };
	friend ostream& operator<<(ostream& os, Error& error);
};
