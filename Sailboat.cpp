#include "Sailboat.h"

Sailboat::Sailboat(vector<string> v) {
	model = v[1];
	year_of_production = stoi(v[2]);
	how_many_people = stoi(v[3]);
	length = stof(v[4]);
	width = stof(v[5]);
	minimum_draft = stof(v[6]);
	maximum_draft = stof(v[7]);
	number_of_sails = stoi(v[8]);
	sail_area = stof(v[9]);
}
Sailboat::Sailboat() {
	system("CLS");
	cout << "==================ADDING A SAILBOAT==========================" << endl << endl;

	string u_model;
	int u_year_of_production;
	int u_how_many_people;
	float u_length;
	float u_width;
	float u_minimum_draft;
	float u_maximum_draft;
	float u_sail_area;
	int u_number_of_sails;

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

	cout << "Enter number of sails: ";
	cin >> u_number_of_sails;

	cout << "Enter sail area: ";
	cin >> u_sail_area;

	model = u_model;
	year_of_production = u_year_of_production;
	how_many_people = u_how_many_people;
	length = u_length;
	width = u_width;
	minimum_draft = u_minimum_draft;
	maximum_draft = u_maximum_draft;
	sail_area = u_sail_area;
	number_of_sails = u_number_of_sails;

}


void Sailboat::show_data() {
	cout << "Type: Sailboat" << endl;
	cout << "Model: " << model << endl;
	cout << "Year of production: " << year_of_production << endl;
	cout << "How many people: " << how_many_people << endl;
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Minimum draft: " << minimum_draft << endl;
	cout << "Maximum draft: " << maximum_draft << endl;
	cout << "Sail area: " << sail_area << endl;
	cout << "Number of sails: " << number_of_sails << endl;
}


ostream& Sailboat::save_data(ostream& os) {
	os << "z" << ',' << model << ',' << year_of_production << ',' << how_many_people << ',';
	os << length << ',' << width << ',' << minimum_draft << ',' << maximum_draft << ',';
	os << number_of_sails << ',' << sail_area << endl;

	return os;
}