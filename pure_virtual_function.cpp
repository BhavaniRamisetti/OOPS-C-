#include <bits/stdc++.h>
using namespace std;
class shape //abstract base class
{
    protected:
    float d1,d2;
    public:
    void getdim()
    {
        cin>>d1>>d2;
    }
    virtual float area()=0;//pure virtual function
};
class triangle:public shape
{
    public:
    float area()
    {
        return (0.5)*d1*d2;
    }
};
class rectangle:public shape
{
    public:
    float area()
    {
        return d1*d2;
    }
};
int main()
{
    triangle t;
    cout<<"enter length and breadth:";
    t.getdim();
    cout<<"Area of triangle is "<<t.area()<<endl;
    rectangle r;
    cout<<"Enter length and breadth:";
    r.getdim();
    cout<<"Area of rectangle is "<<r.area();
}