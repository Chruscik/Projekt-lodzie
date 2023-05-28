#include "Motorboat.h"


Motorboat::Motorboat(vector<string> v) {
	model = v[0];
	year_of_production = stoi(v[1]);
	how_many_people = stoi(v[2]);
	length = stof(v[3]);
	width = stof(v[4]);
	minimum_draft = stof(v[5]);
	maximum_draft = stof(v[6]);
	engine_power = stoi(v[7]);
}


Motorboat::Motorboat() {
	system("CLS");

	cout << "==================ADDING A MOTORBOAT==========================" << endl << endl;
	string u_model;
	int u_year_of_production;
	int u_how_many_people;
	float u_length;
	float u_width;
	float u_minimum_draft;
	float u_maximum_draft;
	int u_engine_power;



	cout << "Enter model: ";
	cin >> u_model;


	cout << "Enter year of production: ";
	cin >> u_year_of_production;

	cout << "Enter how many people: ";
	cin >> u_how_many_people;

	cout << "Enter length: ";
	cin >> u_length;

	cout << "Enter width: ";
	cin >> u_width;

	cout << "Enter minimum draft: ";
	cin >> u_minimum_draft;

	cout << "Enter maximum draft: ";
	cin >> u_maximum_draft;

	cout << "Enter engine power: ";
	cin >> u_engine_power;

	model = u_model;
	year_of_production = u_year_of_production;
	how_many_people = u_how_many_people;
	length = u_length;
	width = u_width;
	minimum_draft = u_minimum_draft;
	maximum_draft = u_maximum_draft;
	engine_power = u_engine_power;
}


void Motorboat::show_data() {
	cout << "Type: Motorboat" << endl;
	cout << "Model: " << model << endl;
	cout << "Year of production: " << year_of_production << endl;
	cout << "How many people: " << how_many_people << endl;
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Minimum draft: " << minimum_draft << endl;
	cout << "Maximum draft: " << maximum_draft << endl;
	cout << "Engine power: " << engine_power << endl;
}


ostream& Motorboat::save_data(ostream& os) {
	os << model << ',' << year_of_production << ',' << how_many_people << ',';
	os << length << ',' << width << ',' << minimum_draft << ',' << maximum_draft << ',';
	os << engine_power << endl;

	return os;
}