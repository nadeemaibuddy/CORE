// Compile-time polymorphism
//Static binding & early binding
#include<iostream>
using namespace std;
class A{
    public:
    int b,c=0;
    A(int a)
    {
        b=a;
    }
    A operator+(A obj)
    {
        c=b+obj.b;
        return c;
    }
};
int main()
{
    A a(10);
    A b(20);
    A c =a +b;
    cout<<c.b;
}

// Some operators are not overloadable:

// ::      Scope resolution
// .       Member access
// .*      Pointer-to-member
// ?:      Conditional operator
// sizeof