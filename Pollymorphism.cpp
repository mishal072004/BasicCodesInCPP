//Pollymorphism
#include <iostream>
using namespace std;
class Demo{
    int a,b;
public:
    void get(){
    cin>>a>>b;
    }
    void add()
    {
        cout<<a+b;
    }
    int  add(int x,int y)
    {
        int xx,yy;
        xx=x;
        yy=y;
        return xx+yy;
    }
};
int main()
{   int sum,xx,yy;
    Demo obj;
    obj.get();
    obj.add();
    cout<<"\nEnter for other xx and yy:";
    cin>>xx>>yy;
    cout<<"In the class";
    sum=obj.add(xx,yy);
    cout<<" :"<<sum;
    return 0;
}
