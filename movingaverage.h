/**
@file movingaverage.h
TO-DO: Implement some kind of moving window of the total data
*/

#pragma once

#include <vector>

using namespace std;

namespace Fin{
	class MovingAverage{
		public:
			enum mode{
				sma,/**Simple moving average*/
				cma,/***/
				wma,
				ema,
				rma,
				mm
			};
			/**
			The constructor
			@param
			@param
			@param
			*/
			explicit MovingAverage(const vector<double> &data, const int &period, const int &mode);
			/**
			The destructor
			*/
			virtual ~MovingAverage();
			/**
			@return
			*/
			double simpleMovingAverage(const vector<double> &data, const int &period, const int &mode);
		private:
			double result = 0.0;
	};
}
