#include<iostream>
using namespace std;
int main() {
    int arr[5] = { 8,6,5,4,1 };
    int n = 5;
    int temp;

    cout<<"ÅÅĞòÇ°:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<" ";
    }
    for (int i = 0; i < n/ 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout<<"\nÅÅĞòºó:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<" ";
    }
    return 0;
}
