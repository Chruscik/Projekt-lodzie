#pragma once
#include <string>
#include <fstream>

using namespace std;


class Boat
{

public:
	virtual void show_data() = 0;
	virtual ostream& save_data(ostream& os) = 0;
	string model;
	int year_of_production;
	int how_many_people;
	float length;
	float width;
	float minimum_draft;
	float maximum_draft;

};

