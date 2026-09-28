#include<iostream>
using namespace std;
class A{
    public:
    int n;
    A(int x)
    {
        n=x;
    }
    A pass_and_returning_by_value(A obj)
    {
        obj.n+=10;
        return obj;
    }
    A pass_and_returning_by_reference(A &obj)
    {
        obj.n+=10;
        return obj;
    }
    A pass_and_returning_by_pointer(A *obj)
    {
        obj->n+=10;
        return *obj;
    }
};
int main()
{
    A obj(100);
    cout<<"original value:"<<obj.n<<endl;
    obj=obj.pass_and_returning_by_value(obj);
    cout<<"after pass by value"<<obj.n<<endl;
    obj=obj.pass_and_returning_by_reference(obj);
    cout<<"after pass by reference"<<obj.n<<endl;
    obj=obj.pass_and_returning_by_pointer(&obj);
    cout<<"after pass by pointer"<<obj.n<<endl;
}