//
//  main.cpp
//  14_numerical_integration
//
//  Created by Hugo Barette on 03/05/2023.
//


/* A numerical integration program which uses both Simpson and
 Trapezoidal rules to evaluate definite integrals. The integrand is
 evaluated separately in a function called "f". So to change the function
 you wish to integrate, simply involves editing one line.*/
/* a and b are lower and upper limits of integration, in turn
 no_steps = no. of steps we discretize the range of integration into
 h = (b-a)/no_steps i.e. step length */
#include <iostream>
#include <cmath>
#include "data.h"
#include "integr.h"
using namespace std;
int main()
{
    double a, b, no_steps, h;
    read(a,b,no_steps,h);
    confirm(a,b,no_steps);
    cout<< "The integral using Simpson's rule is "<<
    Simpson(a,b,no_steps,h)<<endl;
    cout<<endl;
    cout<< "The integral using the Trapezoidal rule is "
    <<Trapezoidal(a,b,no_steps,h)<<endl;
    return 0;
}
