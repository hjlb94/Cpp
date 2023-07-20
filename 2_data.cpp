//
//  data.cpp
//  14_numerical_integration
//
//  Created by Hugo Barette on 03/05/2023.
//

#include <iostream>
#include<cmath>
#include "data.h"
#include "integr.h"

using namespace std;

double read(double& a,double& b,double& no_steps, double& h ) //reference parameters here
// all variables will be changed by this program 
{
    cout<<"Enter the range of integration\n";
    cout<<"a = " ; cin>>a;
    cout<<"b = " ; cin>>b;
    cout<<"How many steps"<<endl;
    cin>> no_steps;
    h=(b-a)/double(no_steps);
    return h;
}
void confirm(double& a,double& b,double& no_steps)
{
    cout << "f(x) will be integrated over the range : ["
    <<a<<" , "<< b<<"], using "<<
    no_steps<< " steps."<<endl;
}
