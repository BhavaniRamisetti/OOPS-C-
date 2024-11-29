//code size increases when we we declare the functions but with same functionality
//to avoid this, generics or templates are used
//here only one function that can perform the functionalities
//function templates and class templates
//function template or generic functions
//Syntax: template <class t1,class t2>
//return_type fun_name(parameters){}
//program size is reduced
#include <iostream>
using namespace std;
template <class t>
t sum(t a,t b)//function template-same type
{
	return a+b;
}
int main()
{
	cout<<"Integer sum is "<<sum(9,8)<<endl;
	cout<<"Float sum is "<<sum(9.1,8.2);
}
