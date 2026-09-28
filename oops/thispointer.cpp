//this refer to current object
//cannot be used in static function and friend function
//every class has an hidden pointer known as this
#include<iostream>
using namespace std;
class A{
    private:
    int a=10;
    public:
    A& increment()          //method chaining
    {
        a++;
        return *this;
    }

    void show(int a)
    {
        // a=a;                //creat ambiguity  which is class variable and which is function variable
        this->a=a;              //this->a  is object variable  a is function parameter
        cout<<this->a;
    }

    bool same(A &obj)  
    {
        return this==&obj;
    }
    void show()
    {
        cout<<a;
    }
};
int main()
{
    A obj,obj1;
    obj.show(20);
    obj.increment().increment().increment().show();
    cout<<obj.same(obj1);   //false because obj and obj1 are different objects
    cout<<obj.same(obj);    //true
}