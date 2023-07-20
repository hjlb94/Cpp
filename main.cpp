//
//  main.cpp
//  17_option_pricing_array
//
//  Created by Hugo Barette on 04/05/2023.
//

#include<iostream>
#include<algorithm>
#include "max_min.hpp"
using namespace std;

int main()
{
    int A[dimen] = {5,67,2098,3,23,43,98,12,3,12 };// define matrix
    cout << "The largest element is " << Maximum(A) << endl;
    cout << "The smallest element is " << Minimum(A) << endl;
    /* call the 2 functions for the Max. and Min. entries, and output to
     screen */
    return 0;
}
