//
//  max_min.cpp
//  17_option_pricing_array
//
//  Created by Hugo Barette on 04/05/2023.
//

#include<iostream>
#include<algorithm>
#include "max_min.hpp"

using namespace std;
int Maximum(matrix A)
{
    int maximum;
    maximum = A[0]; // set maximum equal to the first array element
    for (int i = 1; i <= dimen; i++) // now go along each element
    {
        maximum = max(maximum, A[i - 1]);
    } /* compare each ith element to the (i+1)th and set maximum to the greater
       of the two. Keep doing this till the end of the array is reached */
    return maximum; // largest element of array is returned.
}

/* In the next function, exactly the same idea is used, this time to pick out the
 smallest component of the array. */
int Minimum(matrix A)
{
    int minimum;
    minimum = A[0];
    for (int i = 1; i <= dimen; i++)
    {
        minimum = (minimum < A[i - 1]) ? minimum : A[i - 1];
    }
    return minimum;
}
