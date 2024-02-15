

#include <cmath>
#include <iostream>
using namespace std;

#include "simple_math.h"

double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}

double cubic(double d)
{
	return pow(d,3);
}


// int main(int argc, char **argv) {
//     cout<<squareRoot(36.0)<<endl;
//     cout<<cubic(3.0)<<endl;
//     return 0;
// }

