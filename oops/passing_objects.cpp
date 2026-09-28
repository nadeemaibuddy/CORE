#include<iostream>
using namespace std;
class A{
    public:
    int n;
    A(int x)
    {
        n=x;
    }
    void passbyvalue(A obj)
    {
        obj.n+=10;
    }
    void passbyreference(A &obj)
    {
        obj.n+=10;
    }
    void passbyreference(A *obj)
    {
        obj->n+=10;
    }
};
int main()
{
    A obj(10);
    cout<<"original value:"<<obj.n<<endl;
    obj.passbyvalue(obj);
    cout<<"after pass by value:"<<obj.n<<endl;
    obj.passbyreference(obj);
    cout<<"after pass by reference:"<<obj.n<<endl;
    obj.passbyreference(&obj);
    cout<<"after pass by pointer:"<<obj.n<<endl;
}