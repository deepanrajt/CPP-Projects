#include <iostream>
using namespace std;
void bubblesort (int arr[], int num) {
for (int i=0;i<num;i++) {
    for (int j=0; j<(num-i-1);j++) {
        if (arr[j]>arr[j+1]) {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
}
    for (int f=0; f<num; f++) {
        cout<<arr[f]<<endl;
    }
}
void insertsort (int arr[], int num) {
    for (int i=0; i<num; i++) {
        for (int j=i; j>0; j--) {
            if (arr[j]<arr[j-1]) {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int f=0; f<num; f++) {
        cout<<arr[f]<<endl;
    }
}
void selectsort (int arr[], int num) {
    for (int i=0; i<num; i++) {
        int min=i;
        for (int j=i; j<num; j++) {
            if (arr[min]>arr[j]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (int f=0; f<num; f++) {
        cout<<arr[f]<<endl;
    }
}
int main() {
    int n;
    cout << " Enter the total number of elements " << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int c;
    cout << " Choose the type of the sorting " << endl << "1. Bubblesort" << endl << "2. insertion sort" << endl
         << "3. Selection sort" << endl;
    cin >> c;
    switch(c) {
        case 1:
            bubblesort(a, n);
            break;
        case 2:
            insertsort(a, n);
            break;
        case 3:
            selectsort(a, n);
            break;
        default:
            break;
    }
}
