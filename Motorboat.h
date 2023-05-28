#pragma once
#include "Boat.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;


class Motorboat :
    public Boat
{

public:
    int engine_power;
    Motorboat();
    Motorboat(vector<string> v);
    ~Motorboat() {};
    void show_data();
    ostream& save_data(ostream& os);
};

