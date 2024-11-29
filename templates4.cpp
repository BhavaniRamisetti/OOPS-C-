//we can overload templates also
#include <iostream>
using namespace std;
template <class t>
t sum(t a,t b)
{
	return a+b;
}
template <class t>
t sum(t a,t b,t c)
{
	return a+b+c;
}
int main()
{
	cout<<"2 integer sum is "<<sum(10,20)<<endl;
	cout<<"3 integer sum is "<<sum(10,20,30)<<endl;
	cout<<"2 float sum is "<<sum(1.1,2.2)<<endl;
	cout<<"3 float sum is "<<sum(1.2,2.2,3.3);
	
}
