//
//  runge.h
//  13_first_order_de
//
//  Created by Hugo Barette on 03/05/2023.
//

#pragma once

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

double read(double&, double&, double&, double&);
double runge(std::ofstream&, double, double, double, double);
double f(double, double);


double read(double& a, double& b, double& IC, double& no_steps)
{
    cout << "Enter the range of integration\n";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "Enter initial condition y(a)" << endl;
    cin >> IC;
    cout << "How many steps" << endl;
    cin >> no_steps;
    double h = (b - a) / no_steps;
    return h;
}

double runge(ofstream& out, double a, double IC, double no_steps, double h)
{
    double K1, K2, K3, K4;
    double x = a;
    double w = IC;
    out.precision(12);
    out << a << '\t' << w << endl;
    for (int i = 1; i <= no_steps; i++)
    {
        K1 = h * f(x, w);
        K2 = h * f(x + 0.5 * h, w + 0.5 * K1);
        K3 = h * f(x + 0.5 * h, w + 0.5 * K2);
        K4 = h * f(x + h, w + K3);
        w = w + (K1 + 2 * (K2 + K3) + K4) / 6.0;
        x = a + i * h;
        out << x << '\t' << w << endl; /* results output to excel file*/
        cout << w << endl;
    }
    return 0;
}

/* The function f defines the right hand side of the diff eq. - change this
 to look at other equations - provided you know the initial condition*/
double f(double x, double y) // this is the function that actually gets run...
{
    double function = (2 / x) * y + (x * x) * exp(x); // 1<=x<=2 IC y(1)=0 h=0.1
    
    return function;
}
