//single 
#include<iostream>
using namespace std;
class A{
    public:
    int a=10,b;
    void get(int c)
    {
        b=c;
    }
};
class B:public A{
    public:
    int add()
    {
        return a+b;
    }
};
int main()
{
    B obj;
    obj.get(20);
    cout<<obj.add();
}




//multilevel
#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void get(int x)
    {
        a=x;
    }
};
class B:public A{
    public:
    int b;
    void get1(int y)
    {
        b=y;
    }
};
class C:public B{
    public:
    int add()
    {
        return a+b;
    }
};
int main()
{   C obj;
    obj.get(20);
    obj.get1(20);
    cout<<obj.add();
}


//multiple 
#include<iostream>
using namespace std;
class A{
    public:
    int a=10;
};
class B{
    public:
    int b=20;
};
class C:public A,public B{
    public:
    int add()
    {
        return a+b;
    }
};

int main()
{
    C obj;
    cout<<obj.add();
}


//hierarchical
#include<iostream>
using namespace std;
class A{
    public:
    int a=10,b=20;
};
class B:public A{
    public:
    int add()
    {
        return a+b;
    }
};
class C:public A{
    public:
    int sub()
    {
        return a-b;
    }
};

int main()
{
    B obj;
    cout<<obj.add();
    C obj1;
    cout<<obj1.sub();
}

//hybrid -cobmine more then one type



//multipath
#include<iostream>
using namespace std;
class A{
    public:
    int a=10;
};
class B:virtual public A{
    public:
    int b=20;
};
class C:virtual public A{
    public:
    int c=30;
};
class D:public B,public C{
    public:
    int add()
    {
        return a+b+c;
    }
};

int main()
{
    D obj;
    cout<<obj.add();
}



// //in this inheritance there is a dimond problem,
// //as when two class are derived from the same class
// //and then another class derived fom two derived class
// //get seperate copies of class A,so it become ambiguite
// class A{
//     public:
//     int a=10;
// };
// class B: public A{
//     public:
//     int b=20;
// };
// class C: public A{
//     public:
//     int c=30;
// };
// class D:public B,public C{
//     public:
//     int add()
//     {
//         return a+b+c;
//     }
// };

// int main()
// {
//     D obj;
//     cout<<obj.add();
// }




