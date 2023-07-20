//
//  main.cpp
//  13_first_order_de
//
//  Created by Hugo Barette on 03/05/2023.
//

#include <iostream>
#include <cmath>
#include <fstream>
#include "runge.h"

using namespace std;
int main()
{
    ofstream out;
    out.open("res.xls");
    double a, b, no_steps, IC;
    
    double h = read(a, b, IC, no_steps); //double h is equal to the return value fo the read method defined in runge.h - even though there are 4 inputs, only 1 output..
    
    runge(out, a, IC, no_steps, h);
    
    cout << "step size " << h << endl;
    
    cout << " range of x: " << a << "<= x >=" << b << endl;
    
    out.close();
    
    return 0;
}
