//
//  main.cpp
//  28_complex_class
//
//  Created by Hugo Barette on 05/05/2023.
//

#include <iostream>
#include "complex.hpp"
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    
    Complex a(1, 3), b(4, 5);
    
    Complex c = a+b;
    
    cout << c << endl;
    
    Complex z = a.add(a, b);
    
    cout << z << endl;

    cout << a.arg(a) << endl; //not sure why I need to define the type before the ar
    
    return 0;
    
}
