#include<iostream>
using namespace std;
class A{
    public:
    int n;
    A(int x)
    {
        n=x;
    }
    void show()
    {
        cout<<n<<endl;
    }
};

int main()
{
    A *p=new A(10);
    p->show();
    A *po[5];
    po[0]=new A(20);
    po[1]=new A(30);
    po[2]=new A(40);
    po[3]=new A(50);
    po[4]=new A(60);
    for(int i=0;i<5;i++)
    {
        po[i]->show();
    }

}