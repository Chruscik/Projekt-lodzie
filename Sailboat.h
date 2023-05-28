#pragma once
#include "Boat.h"
#include <iostream>
#include <vector>
using namespace std;
class Sailboat : public Boat
{
public:
	float sail_area;
	int number_of_sails;
	Sailboat();
	Sailboat(vector<string> v);
	ostream& save_data(ostream& os);
	~Sailboat() {};
	void show_data();
};