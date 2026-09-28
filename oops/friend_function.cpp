//friend is a non class member(function) which can access privite and protected function members and data member of a class
//not a class member,declare outside of class,friend ship not mutual,inherited,transitive

#include<iostream>
using namespace std;
class A{
    private:
    int x=10;
    public:
    friend void show(A obj);
};
void show(A obj)
{
    cout<<obj.x;
}
int main()
{
    A obj;
    show(obj);
}