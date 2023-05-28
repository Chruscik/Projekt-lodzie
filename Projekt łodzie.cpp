
#include <iostream>
#include <fstream>
#include <vector>
#include "Boat.h"
#include "Motorboat.h"
#include "Sailboat.h"
#include  <stdlib.h> 
#include <sstream>
#include <cstdio>
#include "Error.h"
using namespace std;


vector<Boat*> load_the_data();
vector<string> split(const string& s, char delim);

ostream& operator<<(ostream& os, Error& error)
{
	os << error.statement;

	return os;
}
int main()
{
	while (true) {
		try {

			Boat* wsk = NULL;
			vector<Boat*> boats = load_the_data();

			system("CLS");

			cout << "==================BOAT SHOP==========================" << endl << endl;

			cout << "1. ADD MOTORBOAT \n\n";
			cout << "2. ADD SAILBOAT \n\n";
			cout << "3. VIEW ADVERTISEMENT \n\n";
			cout << "4. DELETE ADVERTISEMENT \n\n";
			cout << "SELECT OPTIONS: ";

			int option;
			cin >> option;

			if (option > 4) {
				Error* errorek = new Error("NOT FOUND THAT OPTION");
				throw errorek;
			}

			if (option == 1) {

				Boat* motorboat = new Motorboat();
				boats.push_back(motorboat);
			}
			else if (option == 2) {
				Boat* sailboat = new Sailboat();
				boats.push_back(sailboat);
			}
			else if (option == 3) {
				system("CLS");

				cout << "==================ADVERTISEMENT==========================" << endl << endl;
				for (int i = 0; i < boats.size(); i++) {
					boats[i]->show_data();
					cout << endl;
				}

				string reversion;
				cout << "TO RETURN WRITE SOMETHING: ";
				cin >> reversion;


			}
			else if (option == 4) {
				string name;
				int size_before = boats.size();
				cout << "ENETER MODEL NAME: ";
				cin >> name;
				cout << endl;
				for (int i = 0; i < boats.size(); i++) {
					if (boats[i]->model == name) {
						boats.erase(boats.begin() + i);
						break;
					}
				}
				if (size_before > boats.size()) {
					cout << "ANNOUNCEMENT REMOVED" << endl << endl;
				}
				else {
					cout << "DO NOT FOUND ADVERTISEMENT" << endl << endl;
				}
				string reversion;
				cout << "TO RETURN WRITE SOMETHING: ";
				cin >> reversion;
			}
			ofstream File("lodkii.txt");

			for (int i = 0; i < boats.size(); i++) {
				boats[i]->save_data(File);
			}

			File.close();

		}

		catch (Error* error) {
			cout << *error << endl;
			string reversion;
			cout << "TO RETURN WRITE SOMETHING: ";
			cin >> reversion;
		}
	}

}

vector<string> split(const string& s, char delim) {
	vector<string> result;
	stringstream ss(s);
	string item;

	while (getline(ss, item, delim)) {
		result.push_back(item);
	}

	return result;
}

vector<Boat*> load_the_data() {
	string Data;
	vector<Boat*> boats;
	ifstream MyReadFile("lodkii.txt");

	while (getline(MyReadFile, Data)) {
		vector<string> v = split(Data, ',');
		if (v[0] == "z") {
			Boat* sailboat = new Sailboat(v);
			boats.push_back(sailboat);
		}
		else {
			Boat* motorboat = new Motorboat(v);
			boats.push_back(motorboat);
		}
		cout << endl;
	}
	MyReadFile.close();
	return boats;

}
