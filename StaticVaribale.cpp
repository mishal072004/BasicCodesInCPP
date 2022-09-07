//4 class inside another class
#include<iostream>
using namespace std;
class Outside
{
    public:
        int num;
    public:
        void show();
};
class Inside
{
    public:
        int num;
        static int a;
    public:
        void show()
        {
            cout<<a;
        }
};
int Outside::Inside::a=5;
int main()
{
    Outside::Inside A;
    A.show();
    return 0;
}
