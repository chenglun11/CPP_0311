/*输出所有的“水仙花数”，所谓“水仙花数”是指一个3位数，其各位数字立方之和等于该
数本身。
*/
#include<iostream>
using namespace std;
int main() {
    int gw = 0, sw = 0, bw = 0;

    for (int i = 100; i < 1000; i++) {
        gw = i % 10;
        sw = i / 10 % 10;
        bw = i / 100;
        if (i == gw * gw * gw + sw * sw * sw + bw * bw * bw) {
            cout << i << " is a Narcissistic number" << endl;
        }
    }
    return 0;
}
