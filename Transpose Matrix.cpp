#include <iostream>
using namespace std;
int main() {
    int A[10][10], r, c;
    cout << "Enter the Number of rows and columns of the matrix";
    cin >> r >> c;
    cout << "Enter the elements of the matrix";
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> A[i][j];
        }
    }
    cout << "The Transposed Matrix is:";
    for (int i=0; i<c; i++) {
        for (int j=0; j<r; j++){
            cout << A[j][i] << '\t';
        }
        cout << endl;
    }
}