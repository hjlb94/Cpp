//
//  Vector.cpp
//  27_vector_class
//
//  Created by Hugo Barette on 05/05/2023.
//

#include "3_Vector.hpp"
#include<iostream>
#include<cmath>
using namespace std;

//this script defines all the thigns we want to do with vector mathematics

Vector::Vector() { // not sure what the syntax here is for - :: confuses me
    _x=0.0;
    _y=0.0;
    _z=0.0;
}

Vector::Vector(double x, double y, double z) {
    _x=x;
    _y=y;
    _z=z;
}
Vector::~Vector() { }

double Vector::abs(Vector a) // each of these are in the header file? maybe the :: is needed to define functions previously defined? attaches the functoin to the class maybe
{
    double modulus = sqrt (a._x*a._x +a._y*a._y + a._z*a._z);
    return modulus;
}

double Vector::dot(Vector a, Vector b)
{
    double dot_product = (a._x*b._x +a._y*b._y + a._z*b._z);
    return dot_product;
}

void Vector::print()
{
    cout<<"("<<_x<<","<<_y<<","<<_z<<")"<<endl;
}

Vector operator+ (Vector a, Vector b)
//this redefines the + operatior
{
    double x = a._x + b._x;
    double y = a._y + b._y;
    double z = a._z + b._z;
    Vector temp(x,y,z);
    
    return temp;
}

Vector operator- (Vector a, Vector b)
{
    double x = a._x - b._x;
    double y = a._y - b._y;
    double z = a._z - b._z;
    Vector temp(x,y,z);
    return temp;
}

Vector operator* (Vector a, Vector b)
{
    double x = a._y*b._z - a._z*b._y;
    double y = a._z*b._x - a._x*b._z;
    double z = a._x*b._y - a._y*b._x;
    Vector temp(x,y,z); //where the hell does temp come from? is it a key word?
    return temp;
}

ostream& operator << (ostream& out, Vector& a)
{
    out << "(" << a._x <<","<< a._y <<"," << a._z<< ")";
    //this redefines the insertion operator
    out << endl;
    return out;
    //modified to be out and not cout
}
