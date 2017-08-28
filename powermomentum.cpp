#include <iostream>
#include <vector>
#include "powermomentum.h"

using namespace std;

/**
Fin::Powermomentum::Powermomentum(){
	cout << "It works!" << endl;
}*/

Fin::Powermomentum::Powermomentum(const vector<double> &input, const int &period){
	this->powermomentum = (input[period]) - input[0];
}

double Fin::Powermomentum::getPowermomentum(){
	return powermomentum;
}
