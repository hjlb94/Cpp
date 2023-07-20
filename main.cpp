//
//  main.cpp
//  19_gauss_seidel
//
//  Created by Hugo Barette on 05/05/2023.
//

#include<iostream>
using namespace std;

const unsigned short int n = 4;
typedef double matrix[n][n];
typedef double vect[n];

double Gauss(matrix, vect, vect, vect);
int main()
{
    matrix A = { { 10,-1,2,0 },{ -1,11,-1,3 },{ 2,-1,10,-1 },
        { 0,3,-1,8 } };
    double b[4] = { 6,25,-11,15 };
    double X_old[n] = { 1.0,1.0,1.0,1.0 };
    double X[n];
    
    int Iter = 7; //try varying this
    for (int i = 0; i<n; i++) {
        X[i] = X_old[i];
    }
    double Tol = 0.00001;
    
    for (int iteration = 1; iteration <= Iter; iteration++) {
        cout << endl;
        cout << "Iteration No.= " << iteration << endl;
        cout << endl;
        Gauss(A, b, X, X_old);
    }
   // system("pause"); //have removed the pause becuase it's so ovvious if copied
    return 0;
}
/* -------------------------------------------------- */
double Gauss(matrix A, vect b, vect X, vect X_old)
{
    for (int i = 0; i<n; i++)
    {
        
        double sum1 = 0.0;
        double sum2 = 0.0;
        for (int j = 0; j <= i - 1; j++)
        {
            sum1 += -A[i][j] * X[j];
        }
        for (int j = i + 1; j<n; j++)
        {
            sum2 += -A[i][j] * X_old[j];
        }
        X[i] = (sum1 + sum2 + b[i]) / A[i][i];
        X_old[i] = X[i];
    }
    for (int i = 0; i<4; i++) {
        cout << X[i] << endl;
    }
    return 0;
}
