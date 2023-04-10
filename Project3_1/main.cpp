#include<iostream>
using namespace std;
int main() {
    int arr[11] = { 1,2,3,5,6,7,8,9,10,11 };
    int target, tmp;
    cout<<"ÊäÈë:";
    cin >> target;

    for (int i = 0; i < 11; i++) {
        if (target < arr[i] ) {
            tmp = target;
            target = arr[i];
            arr[i] = tmp;
        }

        else if (target >= arr[i]) {
            arr[10] = target;
        }
    }
    cout<<"ÅÅĞòºó:";
    for (int i = 0; i < 11; i++) {
        cout << arr[i]<<" ";
    }
}
