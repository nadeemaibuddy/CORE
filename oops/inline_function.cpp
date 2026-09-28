//inline is a function which place the function code at  th caller site
//every function declare inside class is implicit an inline function
//inline is a request,compiler may ignore this request if the code is long

#include<iostream>
using namespace std;
class A{
    public:
    int show(int x)
    {
        return x*x;
    }
};
inline int square(int x)
{
    return x*x;
}
int main()
{
    int x=10;
    A obj;
    int result=obj.show(x);                         //result={x*x}
    cout<<result<<endl;
    cout<<square(x);

}