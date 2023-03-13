#include<iostream>
#include<string>
using namespace std;
class people{
public:
    people();                                                             //默认构造函数
    people(string _name,int _age,string _sex,string _id,float _salary);   //构造函数
    people(people &pp);
    ~people();
    void get_name();
    int get_age();
    void get_sex();
    void get_id();
    float get_salary();  
    void out();   
private:
    string sex;
    int age;
    string name;
    string id;
    float salary;
};
people::people(string _name,int _age,string _sex,string _id,float _salary){
    name=_name;
    age=_age;
    sex=_sex;
    id=_id;
    salary=_salary;
}
void people::get_name(){
    cout<<"输入姓名："<<endl;
    cin>>name;
}
int people::get_age(){
    cout<<"输入年龄："<<endl;
    cin>>age;
    return age;
}
void people::get_sex(){
    cout<<"输入性别："<<endl;
    cin>>sex;
}
inline void people::get_id(){
    cout<<"输入工号："<<endl;
    cin>>id;
}
float people::get_salary(){
    cout<<"输入工资:"<<endl;
    cin>>salary;
    return salary;
}
void people::out(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<sex<<endl;
    cout<<id<<endl;
    cout<<salary<<endl;
}
int main(){
    people lyzw;
    lyzw.get_name();
    lyzw.get_age();
    lyzw.get_sex();
    lyzw.get_id();
    lyzw.get_salary();
    lyzw.out();
    return 0;
}