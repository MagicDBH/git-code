#include<iostream>
#include<string>
using namespace std;
enum rank{rank1=3,rank2=5,rank3=7,rank4=9};
class CPU
{
    public:
       void Pci();
       void Pco();
       void st(int h,int m,int s);
    private:
       string std;
       int hour,minute,second;
       int rankf=5;
};
class computer
{
    public:
    computer(CPU xi5);
    computer(computer &c2);
    private:
    CPU i5;

};
computer::computer(CPU xi5):i5(xi5){
    cout<<"利用cpu输出数据"<<endl;
}

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
CPU i5;
cout<<"this is my CPU'program"<<endl;
computer CPU(i5);
i5.Pci();
i5.st(8,48,30);
i5.Pco();
}