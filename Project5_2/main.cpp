//商店销售某一商品，商店每天公布统一的折扣(discount)，同时允许销售人员在销售时
//        灵活掌握售价(price), 在此基础上，对一次购10件以上者，还可以享受9.8折优待。现
//        已知当天3个销货员的销售情况为：
//销货员号(num)	   销货件数(quantity)	 销货单价(price)
//101	5	23.5
//102	12	24.56
//103	100	21.5
//请编程序，计算出当日此商品的总销售款sum，以及每件商品的平均售价。要求用静态数据成员和静态成员函数。
//(提示：将折扣discount，总销售款sum和商品销售总件数n声明为静态数据成员，再定义静态成员函数average(求平均售价)和display(输出结果)。


#include <iostream>
using namespace std;
class  Sales{
private:
    int num;
    int quantity;
    int price;
    static int n;
    static double discount;
    static int sum;
public:
    Sales(int num,int quantity,int price):num(n),quantity(quantity),price(price){};
    void count();
    static double average();
    static void display();
};
//初始化开始
int Sales::sum = 0;
double Sales::discount = 0.98;
int Sales::n = 0;
void Sales::count(){
    if(quantity > 10){
        sum += quantity*price*discount;
        n+=quantity;
    } else{
        sum+=quantity*price;
        n+=quantity;
    }
}
double Sales::average() {
    return sum / n;
}
void Sales::display(){
    cout<<"平均售价为："<<Sales::average()<<endl;
    cout<<"总销售件数为："<<sum<<endl;
}
int main() {
    Sales s[3]={Sales(101,5,23.5),Sales(102,12,24.56),Sales(103,100,21.5)};
    for(int i=0;i<3;i++){
        s[i].count();
    }
    Sales::display();
    return 0;
}
