/*class is a user defined data type
extension of c structure
class is encapuslated - wrapping data and functions
data hiding provides security achieved by private declaration
it is a blueprint, using this class, many copies can be created-those are called objects
only class members can access the data that is declared as private
if all are declared private, it can be accessed by only using friend function
inline functions are the function that are declared in class and decreases the performance.so it is better to write functions outside the class
when objects are created then only memory is allocated,class never takes the memory
*/
#include <iostream>
using namespace std;

class Student
{
	private:
		int id;
		char name[20];
	public:
		void read()//inline function
		{
			cout<<"Enter student id and name:";
			cin>>id>>name;
		}
		void show();
};
void Student::show()
{
	cout<<"ID:"<<id<<" "<<"Name:"<<name<<endl;
}
int main()
{
	Student s1,s2;
	s1.read();
	s2.read();
	s1.show();
	s2.show();
}


