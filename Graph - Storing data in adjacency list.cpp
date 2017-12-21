#include <iostream>
#include <string>
using namespace std;
struct vertex{
    string name;
    vertex* adjhead;
    vertex* next;
};
struct node {
    string data;
    int weight;
    node* next;
};

vertex* head= nullptr;
static vertex* lastnode= nullptr;
int main() {
    cout<<" Enter the number of cities "<<endl;
    int num;
    cin>>num;
    for (int i=1; i<=num; i++) {
        vertex* temp = new vertex();
        if (head== nullptr) head = temp;
        cout<<" city "<<i<<":"<<endl;
        cin>>temp->name;
        temp->adjhead= nullptr;
        temp->next= nullptr;
        if (lastnode != nullptr) lastnode->next= temp;
        lastnode = temp;
    }
vertex* traversal= head;
    cout<<endl<<"* * * * * B U I L D I N G  G R A P H * * * * *"<<endl;
    while (traversal != nullptr) {
        int nedge;
        cout<<" Enter number of edges from "<<traversal->name;
        cin>>nedge;
        node* last = nullptr;
        node* start = nullptr;
        for (int i=1; i<=nedge; i++) {
            node* temp = new node();
            if (start== nullptr) start=temp;
            cout<<" connection "<<i<<" to :"<<endl;
            cin>>temp->data;
            cout<<" Enter distance of "<<temp->data<<" from "<<traversal->name<<endl;
            cin>>temp->weight;
            temp->next= nullptr;
            if (last != nullptr) last->next= temp;
            last = temp;
        }
        memcpy(&traversal->adjhead,&start, sizeof(start));
        traversal= traversal->next;
    }
}
