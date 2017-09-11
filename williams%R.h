/**
@file williams%R.h
@brief calculates the williams percent range
*/

#pragma once

#include <vector>

using namespace std;

namespace Fin{
class Williams%R{
	public:
		/**
		The classes constructor
		@param const vector<double> &high A vector of highs
		@param const vector<double> &low A vector of lows
		@param const vector<double> &close A vector of close
		@param const int &period The period in question
		*/
		explicit Williams%R(const vector<double> &high, const vector<double> &low, const vector<double> &close, const int &period);
		/**
		Get the value of the current williams%R
		@return The value of williams%R
		*/
		double getWilliams%R();
		/**
		The classes destructor
		*/
		virtual ~Williams%R();
	protected:
		/**
		The highest high for N period
		@param const vector<double> &high A vector of highs for N period
		@return The highest high for N period
		*/
		double highN(const vector<double> &high);
		/**
		The lowest low for N period
		@param const vector<double> &low A vector of lows for N period
		@return The lowest low for N period
		*/
		double lowN(const vector<double> &low);
		/**
		The current close for N period
		@param const vector<double> &close A vector of closes' for N period
		@return The most recent close for N period
		*/
		double currentClose(const vector<double> &close);
	private:
		double williams%R = 0.0;//The current value of williams%R
};
}
