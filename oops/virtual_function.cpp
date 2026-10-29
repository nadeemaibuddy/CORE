// Run-Time Polymorphism
// Dynamic binding & late binding
#include<iostream>
using namespace std;
//without virtual function
// class base{
//     public:
//     void show()
//     {
//         cout<<"base";
//     }
// };
// class derived:public base{
//     public:
//     void show()
//     {
//         cout<<"derived";
//     }
// };
// int main()
// {
//     base *ptr=new derived();
//     //without virtual function we look for the declared type
//     ptr->show();
// }

class base{
    public:
    virtual void show()
    {
        cout<<"base";
    }
};
class derived:public base{
    public:
    void show()
    {
        cout<<"derived";
    }
};
int main()
{
    base *ptr=new derived();
    //with virtual we look for the actual object created
    ptr->show();
}


// //pure virtual function has no implementation(defination) int the base class
// class base{
//     public:
//     virtual void show() =0;
// };

//a class that contain atleast one virtual function is called abstract class 