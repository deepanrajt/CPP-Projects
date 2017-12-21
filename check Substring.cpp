#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int f=0;
    cout << "Enter first string" << endl;
    cin >> str1;
    cout << "Enter second string" << endl;
    cin >> str2;
    for (int i=0; i<str1.length(); i++) {
        if ((str2[i]==str1[i])) {
            f = 1;
        }
        else if (str2[i]=='*') {
            f = 1;
        }
        else {
            f = 0;
            break;
        }
    }
    if (f == 0) {
        cout << " Second string is not a sub string of String 1";
    }
    else if (f == 1){cout << "Second string is a Substring of String 1";}
}