#include <vector>

using namespace std;

namespace Fin{
double su = 0.0;

double sum(const vector<double> &data){
	for(auto elem : data){
		su += elem;
	}
	return su;
}
};
