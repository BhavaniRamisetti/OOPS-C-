#include <iostream>
using namespace std;
int sum(int x=1,int y=2,int z=3)//default arguments should be given from right to left only
{
	return x+y+z;
}
int main()
{
	cout<<"sum is "<<sum(10,20,30);
	cout<<endl<<"sum is "<<sum(10,20);
	cout<<endl<<"sum is "<<sum(10);
	cout<<endl<<"sum is "<<sum();
}
