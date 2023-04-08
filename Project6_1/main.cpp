    /*定义一个复数类Complex，重载运算符“+”，使之能用于复数的加法运算。将运算符函
    数重载为非成员、非友元的普通函数。编程序，求两个复数之和。
*/

#include<iostream>
    using namespace std;
    class Complex
    {public:
        Complex(){real=0;imag=0;}
        Complex(double r,double i)
        {real=r;imag=i;}
        void get_value();
        void display();
//    private:
        double real;
        double imag;
    };
    Complex operator+(Complex &c1,Complex &c2)
    {
        return Complex(c1.real+c2.real,c1.imag+c2.imag);
    }
    void Complex::get_value()
    {
        cin>>real>>imag;
    }

    void Complex::display()
    {
        cout<<"("<<real<<","<<imag<<"i)"<<endl;
    }
    int main()
    {
        Complex c1,c2,c3;
        c1.get_value();
        c2.get_value();
        cout<<"c1=";c1.display();
        cout<<"c2=";c2.display();
        c3=c1+c2;
        cout<<"c1+c2=";    c3.display();
        return 0;
    }
