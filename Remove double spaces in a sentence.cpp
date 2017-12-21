#include <iostream>
#include <string>
using namespace std;
int main() {
string sent,final;
    int temp=0;
cout << " Enter the sentence";
getline(cin, sent);
    cout << "entered string is... " << sent <<endl;
    for (int i=1;i<=sent.length();i++){
        if ((sent[temp]==' ')&&(sent[i]==' ')) {temp++;}
        else
        {
        final += sent[i];
        temp++;
    }}
cout << final;
}
