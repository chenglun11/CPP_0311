    /*定义一个复数类Complex，重载运算符“+”，使之能用于复数的加法运算。将运算符函
    数重载为非成员、非友元的普通函数。编程序，求两个复数之和。
*/

#include <iostream>
using namespace std;
class Complex{
public:
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(double r,double i){
        real = r;
        imag = i;
    }
    void display(){
        cout<<real<<","<<imag<<endl;
    }
    Complex operator+(Complex &c1);
private:
    double real;
    double imag;
};
Complex Complex::operator+(Complex &c1) {
    Complex c;
    c.real = c1.real + this->real;
    c.imag = c1.imag + this->imag;
    return c;
}
int main() {
    Complex c1(3,4);
    Complex c2(5,6);
    Complex c;
    c = c1.operator+(c2);
    c.display();
}
