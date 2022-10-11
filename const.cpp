#include <iostream>
using namespace std;
class Fact
{
     int a,b;
 public:
    Fact();
    int sum();
    void get(int ,int );


};
void Fact:: get(int first,int secound){
        a=first;
        b=secound;
    }
int Fact::sum()
    {
         return a+b;
    }
Fact::Fact(){
    cout<<"Constructor called:"<<endl;
    }
int main()
{
    Fact obj;
    int sum,f,s;
    cout<<"Enter 2 int:";
    cin>>f>>s;
    obj.get(f,s);
    sum=obj.sum();
    cout<<endl<<"Sum is:"<<sum;

    return 0;
}
