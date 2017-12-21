#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number";
    cin >> n;
    if (n<2) cout << "Enter a number greater than 1";
    for (int i=2; i<n; i++) {
        if (n%i ==0) {
            cout << n << "  is not a prime number";
            break;}
        if ((n%i !=0)&&(i=n-1))
        cout << n << " is a prime number";
    }
}