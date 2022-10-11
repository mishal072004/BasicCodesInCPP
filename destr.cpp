#include<iostream>
using namespace std;
class Sample
{
private:
    int a=10,b=20;
    public :

    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    Sample()
    {
        cout<<"Constructor called:";

    }
};
int main()
{
    Sample S;
    S.show();
    return 0;
}
