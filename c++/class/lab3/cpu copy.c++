#include<iostream>
#include<string>
using namespace std;
class CPU
{
    public:
       CPU(int h,int m,int s)
       {
        hour=h;
        minute=m;
        second=s;
       };
       void Pci();
       void Pco();
       void st(int h,int m,int s);
    private:
       string std;
       int hour,minute,second;
};
void CPU::Pci(){
string a;
cin>>a;
std=a;
}
void CPU::st(int h,int m,int s){
    hour=h;
    minute=m;
    second=s;
}
void CPU::Pco(){
    cout<<std<<endl;
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}
int main(){
CPU i5(8,30,30);
i5.Pco();
cout<<"this is my CPU'program"<<endl;
i5.Pci();
i5.st(8,48,30);
i5.Pco();
}