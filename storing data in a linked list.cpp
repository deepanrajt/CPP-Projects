#include <iostream>
using namespace std;
struct node {
    int data;
    node* link;
};
node *lastnode= nullptr;
node *A= nullptr;
void createnode (int input)
{
    node* temp = new node();
    if (lastnode != nullptr) {lastnode -> link = temp;}
    else {A=temp;}
    temp -> data = input;
    temp -> link = nullptr;
    lastnode = temp;
}
int main() {
    cout << "Enter the Data to be stored in a linked list" << endl;
    int f = 1, entry;
    while (f = 1) {
        cin >> entry;
        createnode(entry);
        node *temp1 = A;
        cout << "Printing the elements in the linked list" << endl;
        while (temp1 != nullptr)  //traversing the linked list
        {
            cout << temp1->data << endl;
            temp1 = temp1->link;
        }
    }
}
