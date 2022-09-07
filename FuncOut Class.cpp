//2Static varibale
#include<iostream>
using namespace std;
class Sample
{
    static int x;
    public:
        void show()
        {
            cout<<x;
        }
};
int Sample::x=20;
int  main()
{
    Sample S1;
    S1.show();
    return 0;
}
