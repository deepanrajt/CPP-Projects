#include <iostream>
using namespace std;
int n, power=1, var, decimal=0;
int decimalconvert (int n) {
    while (n >= 1) {
        var = n % 10;
        n = n / 10;
        decimal += var * power;
        power = power * 2;
    }
    return decimal;
}
int main() {
    cout << "Enter a binary number" << endl;
    cin >> n;
    decimalconvert(n);
    cout << "The decimal equivalent is " << decimal << endl;
}