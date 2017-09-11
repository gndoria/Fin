/**
@file williams%R.cpp
@brief The implementation of the williams%R class
*/

#include "williams%R.h"
#include <vector>
#include <algorithm>

using namespace std;

Fin::Williams%R::Williams%R(const vector<double> &high, const vector<double> &low, const vector<double> &close, const int &period){
	williams%R = ((highN(high)-currentClose(close))/(highN(high)-lowN(low)))*(-100);
}

Fin::Williams%R::~Williams%R(){

}

double Fin::Williams%R::getWilliams%R(){
	return williams%R;
}

double Fin::Williams%R::highN(const vector<double> &high){
	return const auto maximum = max_element(high.cbegin(), high.cend());
}

double Fin::Williams%R::lowN(const vector<double> &low){
	return const auto minimum = min_element(low.cbegin(), low.cend());
}

double Fin::Williams%R::currentClose(const vector<double> &close){
	return close[0];
}
