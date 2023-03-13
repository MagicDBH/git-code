#include<iostream>
#include<math.h>
using namespace std;

class Rectangle{
public:
    int s();
    void in();
private:
    int zy_x,zy_y;
    int yx_x,yx_y;
};

int Rectangle::s(){
    int s=fabs((yx_x-zy_x)*(yx_y-zy_y));
    cout<<s;
    return s;
}

void Rectangle::in(){
    cout<<"请输入左上角坐标：";
    cin>>zy_x>>zy_y;
    cout<<endl;
    cout<<"请输入右下角坐标：";
    cin>>yx_x>>yx_y;
}

int main(){
    Rectangle r1;
    r1.in();
    r1.s();
}