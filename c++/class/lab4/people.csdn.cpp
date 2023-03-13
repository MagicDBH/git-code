#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class People
{
public:
    People();
    People(string _name, char _sex, int _birthyear, int _birthmonth, int _birthday, string _id, string _dept, float _salary);
    People(People &p);
    ~People();
    void input();
    void display();

private:
    string name;
    char sex;
    int birthyear;
    int birthmonth;
    int birthday;
    string id;
    string dept;
    float salary;
};
People::People()
{
    name = "";
    sex = ' ';
    birthyear = 0;
    birthmonth = 0;
    birthday = 0;
    id = "XXXXXXXXXXXXXXXXX";
    dept = "";
    salary = 0.0;
}
People::People(string _name, char _sex, int _birthyear, int _birthmonth, int _birthday, string _id, string _dept, float _salary)
{
    name = _name;
    sex = _sex;
    birthyear = _birthyear;
    birthmonth = _birthmonth;
    birthday = _birthday;
    id = _id;
    dept = _dept;
    salary = _salary;
}
People::People(People &p)
{
    name = p.name;
    sex = p.sex;
    birthyear = p.birthyear;
    birthmonth = p.birthmonth;
    birthday = p.birthday;
    id = p.id;
    dept = p.dept;
    salary = p.salary;
}
People::~People()
{
    cout << "People类析构函数被调用" << endl;
}
void People::input()
{
    cout << "请输入人员信息：" << endl;
    cout << "\t姓名:";
    cin >> name;
    cout << "\t性别:(m(男) or f(女))";
    cin >> sex;
    cout << "\t出生日期(格式：年 月 日):";
    cin >> birthyear;
    cin >> birthmonth;
    cin >> birthday;
    cout << "\t身份证号码：";
    cin >> id;
    cout << "\t所在部门：";
    cin >> dept;
    cout << "\t工资：";
    cin >> salary;
}
void People::display()
{
    cout << "人员信息如下：" << endl;
    cout << "\t姓名：" << name << endl;
    cout << "\t性别：" << sex << endl;
    cout << "\t出生日期：" << birthyear << "/" << birthmonth << "/" << birthday << endl;
    cout << "\t身份证号码：" << id << endl;
    cout << "\t所在部门：" << dept << endl;
    cout << "\t工资：" << salary << endl
         << endl;
}

int main()
{
    People p1;
    p1.input();
    p1.display();
    People p2 = p1;
    p2.display();

    return 0;
}