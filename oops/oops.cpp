// Encapsulation combining class and object into one unit(data hiding)
//Abstraction showing only useful information hiding complex code
//Inheritance deriving a new class from existing class
//Polymorphism function with same name behaving differently



#include<iostream>
using namespace std;
class A{        //class is just template or blueprint no memory is allocate to it 
    //default access specifier is private
    private:                                              // Encapsulation
    int a=10;                                             // Abstraction
    public:                                               // Polymorphism
    void show()                 //function defined inside class is implicit inline
    {
        cout<<a;
    }
    void show(int x)
    {
        cout<<x;
    }
    
};     //->mandatory


int main()
{
    A obj;             //creating object   //memory is allocated for object
    obj.show();
    obj.show(20);
}

