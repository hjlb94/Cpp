//
//  main.cpp
//  27_vector_class
//
//  Created by Hugo Barette on 05/05/2023.
//

#include<cmath>
#include "Vector.hpp"
#include<iostream>

using namespace std;

int main()
{
    Vector a(2,1,3), b(2,2,2), c(0,0,0); //defines the vectors
    /* create and initialise 3 objects of class vector*/
    
    double u=a.dot(a,b);
    /* form the dot product of a and b, then assign the value to u*/
    c=a+b;
    
    c.print(); //uses the print function of the vector class - does work
    
    cout<<endl; // prints an empty line
    
    cout << a; // this works but only if the variable is of type vector! 
    
    return 0;
}
