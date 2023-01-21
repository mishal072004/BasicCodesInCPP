//Inheritance
#include <iostream>
using namespace std;
class SubDemo{
    int a,b;public:
    void get()
    {
        cout<<"Enter for subdemo :";
        cin>>a>>b;
    }
    void sub()
    {
        cout<<"Subrtaction is:"<<(a-b);
    }

};
class AddDemo :public SubDemo {
    int c,d;
    public:
        void add()
        {
            cout<<"Addition is:"<<c+d;
        }
};
int main()
{

    SubDemo obj;
    obj.get();
    obj.sub();
    AddDemo obj2;
    obj2.add();
    return 0;
}
