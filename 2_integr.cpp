//
//  integr.cpp
//  14_numerical_integration
//
//  Created by Hugo Barette on 03/05/2023.
//

// function definition for integ.h
#include <stdio.h>

#include <iostream>
#include <cmath>
#include "data.h"
#include "integr.h"
using namespace std;

//function to be evaluated
double f(double x) // integrand definition
{
    //3 different functions to try - remove the comment command when using the function of interest
    
    double function=x*x; // this is the only line to change.
    // double function= 1.0/(sqrt(2*pi))*exp(-x*x/2.0);
    // double function= sin(2*x)*(1.0/(1+x*x))*exp(-x*x/2.0);
    return function;
}

//simpson function
double Simpson(double a, double b, double no_steps, double step_size)
{
    double sum_even=0.0;
    double sum_odd=0.0;
    for (int i=1; i<=no_steps-1; i++)
    {
        double x=a+i*step_size;
        if (i%2==0){
            sum_even+=f(x);
        }
        
        else
        {
            sum_odd+= f(x);
        }
    }
    double inner_pts=4*(sum_odd)+2*(sum_even);
    double f_x=step_size*(f(a)+inner_pts+f(b))/3.0;
    return f_x;
}

//trapezoidal function
double Trapezoidal (double a, double b, double no_steps, double
                    step_size)
{
    double sum=0.0;
    for (int i=1; i<=no_steps-1; i++)
    {
        double x=a+i*step_size;
        sum+=f(x);
    }
    double inner_pts=2*sum;
    double f_x=0.5*step_size*(f(a)+inner_pts+f(b));
    return f_x;
}
