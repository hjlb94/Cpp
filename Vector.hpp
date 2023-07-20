//
//  Vector.hpp
//  27_vector_class
//
//  Created by Hugo Barette on 05/05/2023.
//


#ifndef VECTOR_H
#define VECTOR_H

#include<iostream>

class Vector
{
    friend Vector operator* (Vector, Vector);
    friend Vector operator+ (Vector, Vector);
    friend Vector operator- (Vector, Vector);
    // we are overloading math operators using the friend function
    
    friend std::ostream& operator << (std::ostream&, Vector&);
    // and the << output operator
    
public: // define the public info of the class
    
    Vector();
    Vector (double,double,double);
    ~Vector(); //thought ~ meant to destroy?
    
    double abs (Vector); // this is a function
    void print(); // this is a function
    double dot (Vector, Vector); //this is a function
    
private:
    double _x,_y,_z; // private data goes in the private section
};

#endif
