/*定义一个复数类Complex，重载运算符“+”，使之能用于复数的加法运算。将运算符函
数重载为非成员、非友元的普通函数。编程序，求两个复数之和。
*/

#include<iostream>
using namespace std;
class Complex
{
public:
    Complex(){real=0;imag=0;}
    Complex(double r,double i){real=r;imag=i;}
    Complex operator+(Complex &c2);
    void display();
private:
    double real;
    double imag;
};
Complex Complex::operator+(Complex &c2)
{
    return Complex(c2.real+real,c2.imag+imag);
}

void Complex::display()
{
    cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
int main()
{
    Complex c1(3,4),c2(5,-10),c3;
    cout<<"c1=";c1.display();
    cout<<"c2=";c2.display();
    c3=c1+c2;
    cout<<"c1+c2=";c3.display();
    return 0;
}
