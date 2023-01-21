//Encapsulation
#include <iostream>
using namespace std;
class Demo
{
    int a,b;
public:
    void get()
    {
        cin>>a>>b;
    }
    void add()
    {
        cout<<a+b;
    }
};
int main()
{
    Demo obj;
    obj.get();
    obj.add();
    return 0;
}
