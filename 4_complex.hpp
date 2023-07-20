//
//  complex.hpp
//  28_complex_class
//
//  Created by Hugo Barette on 05/05/2023.
//

#ifndef complex_hpp
#define complex_hpp
#include<iostream>

class Complex
{
    friend Complex operator+(Complex,Complex);
    friend Complex operator-(Complex,Complex); // overload + and -
    friend Complex operator*(Complex,Complex); // overload multiplication
    friend Complex operator/(Complex, Complex); // overload division
    friend std::ostream& operator << (std::ostream&,Complex&);
    friend std::istream& operator >> (std::istream&,Complex&);
    // overload cin and cout
    
public:
    Complex (); //default constructor - 0 args
    Complex(double ,double ); // constructor - 2 args
    ~Complex(); // destructor - does the destructor always have to be there?
    
    void print(); // displays z (although we have overloaded cout<<)
    
    void get_data();
    
    double arg(Complex); // argument z= arctan(y/x)
    
    Complex conjugate(Complex); // x+iy becomes x-iy
    
    Complex add(Complex , Complex ); // add function z1+z2
    
    Complex modulus(Complex); // Pythagoras – calculates length of z
    
private:
    double _re, _im,r; //this is the data - the real and imaginary part of the complex number 
};
#endif
