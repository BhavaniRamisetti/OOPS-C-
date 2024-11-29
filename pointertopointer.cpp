#include <iostream>
using namespace std;
int main()
{
	int a=5;
	int *p1;
	int **p2;
	p1=&a;
	p2=&p1;
	cout<<"a value:"<<a<<endl;
	cout<<"a value:"<<*p1<<endl;
	cout<<"a value:"<<**p2<<endl;
}
