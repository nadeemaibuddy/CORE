//same name different parameter
// Compile-time polymorphism
//Static binding & early binding
#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<a+b;
}
void add(int a,int b,int c)
{
    cout<<a+b+c;
}
void add(float a,float b)
{
    cout<<a+b;
}
int main()
{
    add(1,2);
    add(1,2,3);
    add(2.74f,4.67f);
}