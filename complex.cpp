//
//  complex.cpp
//  28_complex_class
//
//  Created by Hugo Barette on 05/05/2023.
//

#include "complex.hpp"

#include<iostream>
#include<cmath>
using namespace std;

Complex::Complex () // zero arg constructor - why is there a zero arg consrtuctor?
{   _re=0;
    _im=0;
    
}
Complex :: Complex(double re,double im) // 2 arg constructor
{   _re=re;
    _im=im;}

Complex :: ~Complex() // destructor
{}

/*---------------------------------------------------------------*/
void Complex::print()
{
    cout<<"("<<_re<<","<<_im<<")"<<endl;
}

/*---------------------------------------------------------------*/
double Complex::arg(Complex A)
{
    double argument = atan (A._im/A._re);
    return argument;
}

/*---------------------------------------------------------------*/
Complex Complex::conjugate(Complex A)
{
    double re= A._re;
    double im= -A._im;
    Complex conj(re,im);
    return conj;
}

/*---------------------------------------------------------------*/
Complex Complex::add(Complex A, Complex B)
{
    // Complex c(10,-1), d(-10,1);
    // Complex l=c+d;
    double re= A._re+B._re;
    
    
    double im= A._im+B._im;
    Complex temp(re,im);
    return temp;
    // return l;
}

/*---------------------------------------------------------------*/
Complex Complex::modulus(Complex A) // modulus of z
{
    double re = sqrt(A._re*A._re+A._im*A._im);
    double im = 0 ;
    Complex temp(re,im);
    return temp;
}

/*---------------------------------------------------------------*/
Complex operator+(Complex A, Complex B)
{
    double re= A._re+B._re;
    double im= A._im+B._im;
    Complex temp(re,im);
    return temp; }

/*---------------------------------------------------------------*/
Complex operator-(Complex A, Complex B)
{
    double re= A._re-B._re;
    double im= A._im-B._im;
    Complex temp(re,im);
    return temp; }

/*---------------------------------------------------------------*/
Complex operator*(Complex A, Complex B)
{
    double re= A._re*B._re-A._im*B._im;
    double im= A._im*B._re+A._re*B._im;
    Complex temp(re,im);
    return temp; }

/*---------------------------------------------------------------*/
Complex operator/(Complex A, Complex B)


{
    double denom = (B._re*B._re+B._im*B._im);
    double re= (A._re*B._re+A._im*B._im)/denom;
    double im= (A._im*B._re-A._re*B._im)/denom;
    Complex temp(re,im);
    return temp; }
/*---------------------------------------------------------------*/

ostream& operator << (ostream& cout, Complex& frac)
{if (frac._re!=0.0 && frac._im!=0.0){
    cout << frac._re <<"+(" <<frac._im<<"i)";}
else
    if (frac._re==0.0 && frac._im!=0.0){
        cout <<frac._im<<"i";}
    else
        if (frac._re!=0.0 && frac._im==0.0)
        { cout<<frac._re;}
        else
        { cout<<"0";}
    cout <<endl;
    return cout;
}
