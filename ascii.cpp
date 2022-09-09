#include<iostream>
using namespace std;
class Ascii
{
    int i;
    public :
        void show();
};
void Ascii::show()
{
    for(i=0;i<=255;i++)
        cout<<"The Value is: "<<i<<" The ASCII is: "<<(char)i<<endl;
}
int main()
{
    Ascii obj;
    obj.show();
    return 0;
}
