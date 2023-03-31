//需要求3个长方柱的体积，请编一个基于对象的程序。数据成员包括length(长)、
//width(宽)、height(高)。要求用成员函数实现以下功能：
//⑴由键盘分别输入3个长方柱的长、宽、高；
//⑵计算长方柱的体积；
//⑶输出3个长方柱的体积。


#include <iostream>
using namespace std;
class Rectangular{
private:
    double length;
    double width;
    double height;
public:
    void set(){
        cout<<"please input length,width,height"<<"\n";
        cin>>length>>width>>height;
    }

    void volm(){
        cout << length*width*height<<endl;
    }

};
int main() {
    Rectangular Rectangular1,Rectangular2,Rectangular3;

    Rectangular1.set();
    cout<<"volume of Rectangular1 is: ";
    Rectangular1.volm();

    Rectangular2.set();
    cout<<"volume of Rectangular2 is: ";
    Rectangular2.volm();

    Rectangular3.set();
    cout<<"volume of Rectangular3 is: ";
    Rectangular3.volm();


    return 0;
}

