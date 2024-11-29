#include <iostream>
using namespace std;
int main()
{
//	int a=9;
//	int &ref=a;
//	cout<<"a value is "<<a;
//	cout<<endl<<"a value is "<<ref;
//	ref++;
//	cout<<endl<<"later"<<endl<<"a value is "<<a;
//	cout<<endl<<"a value is "<<ref;

//int a=9;
//int &b=a;//reference variable must be initialized during declaration only otherwise error
//int &c=a;
//cout<<"a value is "<<a<<endl;
//cout<<"a value is "<<b<<endl;
//cout<<"a value is "<<c<<endl;



int x=11; // variable initialization  
int z=67;  
int &y=x; // y reference to x  
int &y=z; // y reference to z, but throws a compile-time error.  
//cannot assign to another variable 
}
