#include<iostream>
using namespace std;

const float PI=3.141593;
class circle{
public:
    float getArea();
private:
    float radius;
};

float circle::getArea(){
    float r;
    cout<<"请输入半径大小：";
    cin>>r;
    radius=r;
    float area=PI*radius*radius;
    cout<<area<<endl;
    return area;
}
int main(){
    circle c1;
    c1.getArea();
    return 0;
}