#include <iostream>
#include "movingaverage.h"
#include "sum.h"

using namespace std;

Fin::MovingAverage::MovingAverage(const vector<double> &data, const int &period, const int &mode){
	switch(mode){
		case sma:
			cout << simpleMovingAverage(data, period, mode) << endl;
			cout << mode << endl;
		break;
		default:
			return;
	}
}
Fin::MovingAverage::~MovingAverage(){
}

double Fin::MovingAverage::simpleMovingAverage(const vector<double> &data, const int &period, const int &mode){
	double smaResult = 0.0;
	for(auto elem : data){
		smaResult += elem;
	}
	return (smaResult/period);
}
