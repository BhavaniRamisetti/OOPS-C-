#include <iostream>
using namespace std;
int main()
{
	char *name[]={"bhavani","sai","jyothi","vinitha","sidhu"};
	for(int i=0;i<5;i++)
	{
		cout<<*name[i]<<" ";
	}
}
