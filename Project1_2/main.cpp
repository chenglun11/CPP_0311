//
// Created by yanch on 2023/3/31.
//

//2��	һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ����������

#include<iostream>
using namespace std;
int main() {
    int sum;
    int i = 0, j = 0;

    for (i = 1; i <= 1000; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            cout << sum << "��its factors  are ";
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    cout << j<<"�� ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
