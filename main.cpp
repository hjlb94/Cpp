//
//  main.cpp
//  09_CDF_function
//
//  Created by Hugo Barette on 03/05/2023.
//

#include<iostream>
#include<cmath>
using namespace std;
const double pi=4.0*atan(1.0); //define constant pi=3.142 (global)
double CDF(double); // function declaration – takes 1 real i.e. RV X
int main()
{
    double X=0; // X is the random variable
    cout<< "Enter the value of the random variable X" <<endl;
    /* upper limit of integral*/
    cin>>X;
    cout<< CDF(X) <<endl; //output value of N(x) by calling the function
    return 0;
}
/* Now define the function */
double CDF(double X)
{
    const double a1=0.319381530, a2=-0.356563782, a3=1.781477937,
    a4=-1.821255978, a5=1.330274429;
    double x=0, k=0; //always good to initialise variables
    double N, CDF, n;
    x=fabs(X);
    k=1/(1+0.2316419*x);
    n=(1/sqrt(2*pi))*exp(-0.5*x*x);
    N=1-n*(a1*k+a2*k*k+a3*pow(k,3)+a4*pow(k,4)+a5*pow(k,5));
    if (X>=0)
        CDF=N;
    else
        CDF=1-N;
    return CDF;
}
