#include<iostream>
using namespace std;
void gotbaha(int);
int prime(int);
int main() {
    int target;
    cin >> target;
    if (target < 6 || target % 2 != 0)
        cout << "input error" << endl;
    gotbaha(target);
}
int prime(int p_target) {
    for (int i = 2; i < p_target; i++) {
        if (p_target % i == 0) {
            return 0;
        }
    }
    return 1;
}
void gotbaha(int g_target) {
    for (int i = 2; i < g_target; i++) {
        if (prime(i) == 1) {
            for (int j = 2; j < g_target; j++) {
                if ((prime(j)==1)  && (i + j == g_target)) {
                    cout << g_target << "=" << i << "+" << j << endl;
                }
            }
        }
    }
}
