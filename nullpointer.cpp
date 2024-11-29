#include <iostream>
using namespace std;
int main()
{
	int *ptr1=0;
	int *ptr2=NULL;
	int a=5;
	ptr2=&a;
	cout<<ptr1<<" "<<ptr2;
	cout<<"a is "<<*ptr2;
}
