//写一函数，求一个字符串的长度。在main函数中输入字符串，并输出其长度。
#include <iostream>
using namespace std;
int len(char *q);
int main() {
    char str[100];
    int count;
    cin>>str;
    count = len(str);
    cout << count <<endl;
    return 0;
}
int len (char *str){
    char *p;
    p = str;
    int count;
    while(*p != '\0'){
        count++;
        p++;
    }
    return count;
}