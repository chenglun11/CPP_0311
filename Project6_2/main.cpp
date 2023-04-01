//定义一个复数类Complex，重载运算符“+”，“-”，“*”，“/”，使之能用于复数的加、减、
//乘、除。运算符重载函数作为Complex类的成员函数。编程序，分别求两个复数之和、
//差、积和商。
#include <iostream>
using namespace std;
class Complex{
public:
    Complex():real(0),imag(0){};
    Complex(double r,double i):real(r),imag(i){};
    void display();
    Complex operator+(Complex &c1);
    Complex operator-(Complex &c1);
    Complex operator*(Complex &c1);
    Complex operator/(Complex &c1);
private:
    double real;
    double imag;
};
void Complex::display() {
    cout<<real<<"+"<<imag<<"i"<<endl;
}
Complex Complex::operator+(Complex &c1) {
    Complex c;
    c.real = c1.real + this->real;
    c.imag = c1.imag + this->imag;
    return c;
}

Complex Complex::operator-(Complex &c1) {
    Complex c;
    c.real = c1.real - this->real;
    c.imag = c1.imag - this->imag;
    return c;
}

Complex Complex::operator*(Complex &c1) {
    Complex c;
    c.real = c1.real * this->real;
    c.imag = c1.imag * this->imag;
    return c;
}

Complex Complex::operator/(Complex &c1) {
    Complex c;
    c.real = c1.real / this->real;
    c.imag = c1.imag / this->imag;
    return c;
}

int main() {
    Complex c1(5,4),c2(3,4),c3;
    c3 = c1+c2;cout<<"c1+c2 = ";c3.display();
    c3 = c1-c2;cout<<"c1-c2 = ";c3.display();
    c3 = c1*c2;cout<<"c1*c2 = ";c3.display();
    c3 = c1/c2;cout<<"c1/c2 = ";c3.display();
    return 0;
}
