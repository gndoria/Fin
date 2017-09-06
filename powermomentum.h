#pragma once
/**
@file powermomentum.h
@brief Header for the power momentum technical indicator
fomulae:
for a five day mom:
price 5days ago - todays price
*/

#include <vector>

using namespace std;

namespace Fin{
class Powermomentum{
	public:
		/**
		Default constructor
		@return none
		Powermomentum();
		*/
		/**
		Custom constructor
		@brief Sets the value of powermomentum
		@param vector<double> &input: the input sequence
		@param int &period: the window period
		@return none*/
		explicit Powermomentum(const vector<double> &input, const int &period);
		/**
		The destructor
		*/
		virtual ~Powermomentun();
		/**
		Get the value of powermomentum
		@return Returns the value of the powermomentum
		*/
		double getPowermomentum();

	private:
		double powermomentum;
};
};
