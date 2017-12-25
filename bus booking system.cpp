#include <iostream>
#include <fstream>
using namespace std;
struct bus{
    int id;
    int seat;
    string name;
    string ff;
    string tt;
    bool sleeper;
    bool ac;
    bus* next;
};
bus* head = nullptr;
bus* lastnode = nullptr;
void createbus() {
    bus *temp = new bus();
    if (head == nullptr) {
        head = temp;
        lastnode = temp;
    } else lastnode->next = temp;
    cout<<"Enter Bus Name: "<<endl;
    cin>>temp->name;
    cout<<"Enter Bus id: "<<endl;
    cin>>temp->id;
    cout<<"Enter Bus Source: "<<endl;
    cin>>temp->ff;
    cout<<"Enter Bus Destination: "<<endl;
    cin>>temp->tt;
    cout<<"Is AC Available? "<<endl;
    cin>>temp->ac;
    cout<<"Is the bus sleeper? "<<endl;
    cin>>temp->sleeper;
    cout<<"Number of seats "<<endl;
    cin>>temp->seat;
    temp->next= nullptr;
    lastnode = temp;
}
int main() {
    int opt;
    cout<<"* * * * * W E L C O M E  T O  B L U E B U S * * * * *"<<endl;
    int h=1;
    while (h=1) {
    cout<<"1. Add Bus"<<endl<<"2. Book bus"<<endl;
    cin>>opt;
    if (opt == 1) {
            int num;
            cout << "number of buses" << endl;
            cin >> num;
            for (int i = 0; i < num; i++) {
                createbus();
            }
        }
    else if (opt ==2) {
        string source,destination;
        cout<<"Source: "<<endl;
        cin>>source;
        cout<<"Destination: "<<endl;
        cin>>destination;
        bus* temp1 = head;
        bus* temp2 = head;
        int g=0;
        while (temp1 != nullptr) {
            if ((temp1->ff==source)&&(temp1->tt==destination)) g++;
            temp1 = temp1->next;
        }
        if (g==0) cout<<" No buses available between these places ";
        else {
        cout<<"Buses Available: "<<endl;
        while (temp2 != nullptr) {
            if ((temp2->ff==source)&&(temp2->tt==destination)) cout<<temp2->name<<" "<<temp2->id<<endl;
            temp2 = temp2->next;
        }
            int idd;
            cout<<" Enter a bus id ";
            cin>>idd;
            bus* temp3 = head;
            bus* req;
            while (temp3!= nullptr) {
                if (temp3->id==idd) {
                    req=temp3;
                }
                temp3 = temp3->next;
            }
            int seatreq;
            cout<<"number of seats available in "<<req->name<<" is"<<req->seat<<endl<<"how many seats do you want to book? "<<endl;
            cin>>seatreq;
            if (seatreq > req->seat) {
                cout<<"Number of seats exceeds the available seats"<<endl;
            }
            else {
                cout<<"Booking Successful"<<endl;
                req->seat -= seatreq;
            }
        }
    }
}}