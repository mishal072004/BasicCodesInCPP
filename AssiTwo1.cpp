//1. Write an Object Oriented program to add the elements of one dimension array.
#include<iostream>
using namespace std;
class Sum{
    private :
        int arr[10];
        int sum=0;

    public :
        void get(){
            int i;
        cout<<"Enter 10 int :";
        for( i=0;i<10;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];

        }
        }
        void show(){
            cout<<"The Sum is:"<<sum;
        }
};
int main()
{
     Sum S;
     S.get();
     S.show();
     return 0;
}
