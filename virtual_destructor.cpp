#include <iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<endl<<"base constructor";
    }
    virtual ~base()
    {
        cout<<endl<<"base destructor";
    }
};
class der:public base
{
    public:
    der()
    {
        cout<<endl<<"derived class constructor";
    }
    ~der()
    {
        cout<<endl<<"derived class destructor";
    }
};
int main()
{
    base *b=new der;
    delete b;
}