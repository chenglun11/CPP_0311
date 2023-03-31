#include<iostream>
using namespace std;
int main() {
    float sum = 0, m = 1, n = 2, e, c;
    for (int i = 1; i <= 20; i++) {
        e = n / m;
        sum += e;
        c = n;
        n = m + n;
        m = c;
    }

    cout << sum << endl;
}
