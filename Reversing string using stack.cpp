#include <iostream>
#include <stack>
using namespace std;
int main() {
    string str;
    cout << " Enter the string : ";
    getline (cin, str);
    stack<char> s;
    for (int i=0; i<str.length(); i++) {
        s.push(str[i]);
    }
    for (int i=0; i<str.length(); i++) {
        str[i] = s.top();
        s.pop();
    }
    cout << str;
}
