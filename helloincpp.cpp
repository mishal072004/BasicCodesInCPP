#include<iostream>
using namespace std;
class Hello
{
    int i;
  public:
      void get();
      void show();
};
void Hello::get()
{
  cout<<"Enter your age:";
  cin>>i;
}
void Hello::show()
{
  cout<<"Your age is :"<<i;
}
int main()
{
  Hello obj;
  obj.get();
  obj.show();
  return 0;
}
