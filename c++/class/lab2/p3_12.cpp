//3_12.cpp
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int t = a;
	a = b;  //ʹ�����ã���ͬʹ�ñ���
	b = t;
}

int main() {
	int x = 5, y = 10;
	cout << "x = " << x << "    y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << "    y = " << y << endl;
	
	return 0;
	
}
