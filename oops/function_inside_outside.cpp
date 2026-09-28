#include<iostream>
using namespace std;
class A{
    private:
    int a=10;  
    public:                                            
    void show()    
    {
        cout<<a;
    }
    void inside();
    
};
void A::inside()
{
    cout<<a;
}

int main()
{
    A obj;             
    obj.show();
    obj.inside();
}