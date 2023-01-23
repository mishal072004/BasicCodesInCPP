#include <iostream>
using namespace std;
class Demo{
    int a,b,c;
    public:
    void get()
    {
        cin>>a>>b;
    }

      void add()
    {
         c=a+b;
         cout<<c;
    }

};
int main() {
    // Write C++ code here
   Demo d;
   d.get();
   d.add();

    return 0;
}
