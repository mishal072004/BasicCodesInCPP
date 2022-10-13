#include <iostream>
using namespace std;
class Sample
{
public:
    ~Sample()
    {
        cout<<"Destructor called"<<endl;
    }
    inline int add(int i,int j)
    {
        return(i+j);
    }
    inline void show()
    {
        cout<<"Hello"<<endl;
    }
    Sample()
    {
        cout<<"constructor called"<<endl;
    }
};
int main()
{
    Sample s;
    cout<<"Sum is "<<s.add(10,20)<<endl;
    s.show();
    return 0;
}
