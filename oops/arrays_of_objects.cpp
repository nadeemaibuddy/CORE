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
    
    
};
int main()
{
    A obj[5];     
    for(int i=0;i<5;i++)
    {
        obj[i].show();
    }        
    
}