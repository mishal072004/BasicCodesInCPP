#include<iostream>
using namespace std;
class Name{
   private: int roll=90;;
    public:
           void show();
};
void Name ::show(){
cout<<"The roLL number is"<<roll<<endl;
}
int main()
{
    Name obj;
    obj.show();
    return 0;
}

