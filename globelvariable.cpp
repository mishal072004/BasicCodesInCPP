//Global varibale
#include<iostream>
using namespace std;
class Sample
{
    public:
        void show();
};
class Sample2
{
    public:
        void show();
};
void Sample2::show()
{
    cout<<"Hello User";
}
int  main()
{
    Sample2 S1;
    S1.show();
    return 0;
}
