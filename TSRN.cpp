#include <iostream>
using namespace std;
void add(int ,int);
void add(int a,int b)
{
     int x,y;
     x=a;
     y=b;
     cout<<"The sum is:"<<x+y;
}
int main()
{
    int a,b;
     cout<<"Enter 2 int:";
     cin>>a>>b;
     add(a,b);
     return 0;
}
