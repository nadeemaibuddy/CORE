#include<iostream>
using namespace std;
class base{
    public:
    virtual ~base(){       //without virtual only base classdestructor runs
        cout<<"base";
    }
};
class derived:public base{
    public:
    ~derived()
    {
        cout<<"derived";
    }
};
int main()
{
    base *ptr=new derived();
    //if non virtual then base class method ,destructor is called
    //if virtual then derived class method is called 
    delete ptr;
}






// #include<iostream>
// using namespace std;
// class demo{
//     public:
//     int id;
//     demo(int i)
//     {
//         id=i;
//     }
//     ~demo()          //called in reverse order,lifo last object created get destroyed fast;
//     {
//         cout<<id;
//     }
// };
// int main()
// {
//     demo obj(1);
//     demo obj1(2);
//     demo obj2(3);
// }