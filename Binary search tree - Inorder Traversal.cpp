#include <iostream>
using namespace std;
struct node {
    int data;
    node* left;
    node* right;
};
node* root = nullptr;
node* newnode(int n) {
 node* temp = new node();
        temp->data=n;
    temp->left= nullptr;
    temp->right= nullptr;
    if (root== nullptr) root=temp;
    return temp;
}

node* insert (node* link, int n) {
    if (link==nullptr) link =newnode(n);
    else if (n <= link->data) {link->left= insert(link->left,n);}
    else {link->right=insert(link->right,n);}
    return link;
}
node* findmin(node* link) {
node* min = link;
    while (min != nullptr) {
        min = min->left;
    }
    return min;
}
node* del(node* link, int n) {
if (link== nullptr) return link;
else if (link->data > n) link->left=del(link->left,n);
else if (link->data < n) link->right=del(link->right,n);
    else {
if ((link->left==nullptr)&&(link->right==nullptr)) {
delete link;
link= nullptr;
}
else if (link->left== nullptr) {
node* temp = link;
link=link->right;
delete temp;
}
else if (link->right== nullptr) {
node* temp = link;
link=link->left;
delete temp;
}
else {
node* temp =findmin(link->right);
root->data = temp->data;
root->right = del(root->right, temp->data);
}
return link;
}}
void inorder(node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}
int main() {
    int num,i=1,f,d,h;
    cout<<"Enter the number of elements to be stored in a binary search tree"<<endl;
    cin>>num;
    while(i<=num) {
        cout<<"enter element "<<i<<endl;
        cin>>h;
        root = insert(root,h);
        i++;
    }
    cout<<"Do you want to delete any element?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
    cin>>f;
    if (f=1) {
        cout<<"Enter the element to be deleted"<<endl;
        cin>>d;
        del(root,d);
        cout<<d<<" is deleted."<<endl;
    }
    if ((f!=1)&&(f!=2)) cout<<"Invalid Response"<<endl;
    cout<<" Printing the elements in BST in ascending order "<<endl;
    inorder(root);
}
