//дһ��������һ���ַ����ĳ��ȡ���main�����������ַ�����������䳤�ȡ�
#include <iostream>
using namespace std;
int len(char *q);
int main() {
    char str[100];
    int count;
    cout<<"�����ַ���"<<endl;
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