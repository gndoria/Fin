/**
@file sum.h
@author Gideon Ndoria
*/
#include <vector>

using namespace std;

namespace Fin{
	double su = 0.0;
	/**
	A utility function to sum up the elements of a vector
	@param The vector to work on
	@return The sum af the elements in the vector
	*/
	double sum(const vector<double> &data){
		for(auto elem : data){
			su += elem;
		}
		return su;
	}
};
