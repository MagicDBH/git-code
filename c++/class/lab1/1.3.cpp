#include <iostream>
#define TENG
using namespace std;

int main() {
#ifdef TENG
	cout<<"teng"<<endl;
#else
	cout<<"no teng"<<endl;
#endif
	return 0;
}