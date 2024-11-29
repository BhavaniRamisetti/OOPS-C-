#include <iostream>
using namespace std;
int main()
{
	int *p=new int;
	float *q=new float;
	*p=55;
	*q=33.3;
	//or
	//int *p=new int(55);
	//float *q=new float(33.3);
	 delete p;
	 delete q;
	 
}
