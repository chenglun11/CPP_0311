//写一函数，实现两个字符串的比较
#include <iostream>
using namespace std;

int strcmp(char * p1,char * p2){

    for(;(*p1 != '\0')&&(*p2!='\0');p1++,p2++){
        if(*p1 == *p2){
            return 0;
        }
        else if(*p1 != *p2){
            return *p1-*p2;
        }
    }
}
int main() {
    char s1[20],s2[20];
    cout << "First string" <<endl;
    cin >> s1;
    cout << "Second string" <<endl;
    cin >> s2;
    int t = strcmp(s1,s2);
    cout << "Comparing~~~~~" << endl;
    cout<<t<<endl;
    return 0;
}
