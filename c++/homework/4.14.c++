#include<iostream>
using namespace std;
class tree{
public:
    tree(int a);
    int grow(int years);
    int age();
private:
    int ages;
};

int tree::grow(int years){
    ages+=years;
}

int tree::age(){
    cout<<ages<<endl;
    return 0;
}

tree::tree(int a){
    ages=a;

}
int main(){
    tree t1(12);
    t1.grow(12);
    t1.age();
}
