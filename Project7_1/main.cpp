//分别定义Teacher（教师）类和Cadre（干部）类，采用多重继承方式由这两个类派生
//        出新类Teacher_Cadre（教师兼干部）。要求：
//⑴在两个基类中都包含姓名、年龄、性别、地址、电话等数据成员。
//⑵在Teacher类中还包含数据成员title（职称），在Cadre类中还包含数据成员post（职
//        务）。在Teacher_Cadre类中还包含数据成员wages（工资）。
//⑶对两个基类中的姓名、年龄、性别、地址、电话等数据成员用相同的名字，在引用
//        这些数据成员时，指定作用域。
//⑷在类体中声明成员函数，在类外定义成员函数。
//⑸在派生类Teacher_Cadre的成员函数show中调用Teacher类中的display函数，输出
//        姓名、年龄、性别、职称、地址、电话，然后再用cout语句输出职务与工资。
//

#include <iostream>
using namespace std;
class Teacher{
public:
    Teacher(string Name, int Age, char Sex, string Address, string Number, string Title);
    void display();
protected:
    string name;
    int age;
    char sex;
    string address;
    string number;
    string title;
};
class Cadre{
public:
    Cadre(string Name, int Age, char Sex, string Address, string Number, string Post);
    void display_c();
protected:
    string name;
    int age;
    char sex;
    string address;
    string number;
    string post;
};
class Teacher_Cadre: public Teacher,public Cadre{
public:
    Teacher_Cadre(string Name,int Age,char Sex,string Address,string Number,string Title,string Post,double Wage);
    void show();
private:
    double wage;
};
Teacher::Teacher(string Name,int Age,char Sex,string Address,string Number,string Title):name(Name),age(Age),sex(Sex),
address(Address),number(Number),title(Title){};
void Teacher::display() {
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"address:"<<address<<endl;
    cout<<"number:"<<number<<endl;
    cout<<"title:"<<title<<endl;
}
Cadre::Cadre(string Name,int Age,char Sex,string Address,string Number,string Post):name(Name),age(Age),sex(Sex),
address(Address),number(Number),post(Post){};
void Cadre::display_c() {
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"address:"<<address<<endl;
    cout<<"number:"<<number<<endl;
    cout<<"post:"<<post<<endl;
}
Teacher_Cadre::Teacher_Cadre(std::string Name, int Age, char Sex, std::string Address, std::string Number,
                             std::string Title, std::string Post, double Wage): Teacher(Name,Age,Sex,Address,Number,Title),
                                                                                Cadre(Name,Age,Sex,Address,Number,Post),wage(Wage){};
void Teacher_Cadre::show() {
    Teacher::display();
    cout<<"post:"<<Cadre::post<<endl;
    cout<<"wage:"<<wage<<endl;
}
int main() {
    Teacher_Cadre teacherCadre("Lichengan",23,'M',"xafsadsadsf","1390001111","Prof","President",19922.2);
    teacherCadre.show();
    return 0;
}
