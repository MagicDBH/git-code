//游泳池改造（包含类的声明、成员函数的声明与实现、构造函数、析构函数）
#include<iostream>
using namespace std;

const float PI=3.141593;
const float FENCE_PRICE=35;                        //栅栏的单价
const float CONCRETE_PRICE=20;                     //过道水泥的单价

class Circle{
public:
   Circle(float r);
   float circumference();
   float area();
private:
   float radius;
};



Circle::Circle(float r){
    radius=r;
}


//计算圆的周长
float Circle::circumference(){
    return 2*PI*radius;
}


float Circle::area(){
     return PI*radius*radius;
}


int main(){
    float radius;
    cout<<"Enter the radius of the pool:";
    cin>>radius;
    Circle pool(radius);                          //游泳池边界对象
    Circle poolRim(radius+3);                     //栅栏对象


    float fenceCost=poolRim.circumference()*FENCE_PRICE;
    cout<<"Fencing Cost is$"<<fenceCost<<endl;

    float concreteCost=(poolRim.area()-pool.area())*CONCRETE_PRICE;
    cout<<"Concrete Cost is$"<<concreteCost<<endl;

    return 0;
}