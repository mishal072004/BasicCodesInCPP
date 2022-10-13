#include <iostream>
using namespace std;
class Sample
{
    int i,a,b;
public:
    ~Sample()
    {
        cout<<"Destructor called"<<endl;
    }
    friend int add(Sample);
    Sample(int j)
    {
        i=j;
        cout<<"Constructor called"<<endl;
    }
};
int add(Sample s)
{
        return (s.i+s.i);
}
int main()
{
    Sample obj(20);
    cout<<add(obj)<<endl;
    return 0;
}
