//�̵�����ĳһ��Ʒ���̵�ÿ�칫��ͳһ���ۿ�(discount)��ͬʱ����������Ա������ʱ
//        ��������ۼ�(price), �ڴ˻����ϣ���һ�ι�10�������ߣ�����������9.8���Ŵ�����
//        ��֪����3������Ա���������Ϊ��
//����Ա��(num)	   ��������(quantity)	 ��������(price)
//101	5	23.5
//102	12	24.56
//103	100	21.5
//�����򣬼�������մ���Ʒ�������ۿ�sum���Լ�ÿ����Ʒ��ƽ���ۼۡ�Ҫ���þ�̬���ݳ�Ա�;�̬��Ա������
//(��ʾ�����ۿ�discount�������ۿ�sum����Ʒ�����ܼ���n����Ϊ��̬���ݳ�Ա���ٶ��徲̬��Ա����average(��ƽ���ۼ�)��display(������)��


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
//��ʼ����ʼ
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
    cout<<"ƽ���ۼ�Ϊ��"<<Sales::average()<<endl;
    cout<<"�����ۼ���Ϊ��"<<sum<<endl;
}
int main() {
    Sales s[3]={Sales(101,5,23.5),Sales(102,12,24.56),Sales(103,100,21.5)};
    for(int i=0;i<3;i++){
        s[i].count();
    }
    Sales::display();
    return 0;
}
