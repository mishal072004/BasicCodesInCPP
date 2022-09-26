//2. Write an object oriented program to read a set of numbers and find out theLargest and smallest element in the given array
#include<iostream>
using namespace std;
class Sum{
    private :
        int arr[10];
        int sum=0;
        int large,smal;

    public :
        void get();
        void show();
};
void  Sum:: get(){
            int i;
        cout<<"Enter 10 int :";
        for( i=0;i<10;i++)
        {
            cin>>arr[i];
        }
         large=arr[0], smal=arr[0];
        for(i=0;i<10;i++)
        {
            if(arr[i]>large)
                large=arr[i];
            else if(arr[i]<smal)
                smal=arr[i];
        }
}
void Sum::show(){
            cout<<"Largest Numbes is "<<large<<endl;
            cout<<"Smallest Numbes is "<<smal;
}
int main()
{
     Sum S;
     S.get();
     S.show();
     return 0;
}
