#include <iostream>
using namespace std;
void getMatrix (int X[10][10], int m, int n)//getting elements of the Matrix
    {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> X[i][j];
        }
    }
    }
int main() {
    int A[10][10], B[10][10], Ans[10][10];
    int c, d, f, g;
    cout << "Enter the order of Matrix A";
    cin >> c >> d;
    cout << "Enter the order of Matrix B";
    cin >> f >> g;
    if (d != f) { cout << "These Matrices can't be multiplied"; }
    else {
        cout << "Enter the elements of Matrix A";
        getMatrix(A, c, d);
        cout << "Enter the elements of Matrix B";
        getMatrix(B, f, g);
        for (int i = 0; i < c; i++) //setting the initial values of Ans Matrix to 0
            for (int j = 0; j < g; j++) {
                Ans[i][j] = 0;
            }
        for (int i = 0; i < c; i++) //Multiplication of Matrices
            {
            for (int j = 0; j < g; j++) {
                for (int k = 0; k < d; k++) {
                    Ans[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        cout << "The Result is :" << endl; //Displaying Answer
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < g; j++) {
                cout << Ans[i][j];
                cout << '\t';
            }
            cout << endl;
        }
    }
}