//constructor is a function whic has same name as class
//has no returntype,it dont return any thing
//get executed when an object is created
//can be overloded
//can be virtual
//if own copy constructor is not created then c++ call it default constructor which cause shallow copy problem

#include<iostream>
using namespace std;
class A{
    public:
    int x=0,*ptr;
    A()
    {
        cout<<"default constructor"<<x<<endl;
    }
    // A(int x)
    // {
    //     this->x=x;
    //     cout<<"parameterised constructor: "<<x<<endl;
    // }
    // A(const A &obj)         //deep copy, it creat a seperate copy
    // {
    //     this->x=obj.x;
    //     cout<<"copy constructor: "<<obj.x<<endl;
    // }
    A(int x)
    {
        ptr=new int(x);
    }
};
int main()
{
    // A obj1;          //calls default constructor
    // A obj1(10);     //calls parameterised constructor
    // A obj2=obj1;
    A obj(10);
    cout<<*obj.ptr<<endl;
    A obj1=obj;        //creat a shallow copy,partial copy which can be edited with different object as they both share same address
    cout<<*obj1.ptr<<endl;
    *obj1.ptr=100;
    cout<<*obj1.ptr<<endl;
    
}