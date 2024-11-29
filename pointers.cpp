#include <iostream>
using namespace std;
int main()
{
	int a=98;
	int *ptr=&a;
	cout<<"Value of a is "<<a<<endl;
	cout<<"Address of a is "<<&a<<endl;
	cout<<"Value of a is "<<*ptr<<endl;
	cout<<"Address of a is "<<ptr;

}
