#include <iostream>

using namespace std;

int main()
{
    int a,b,x;
     cout<<"Enter a value for (a): ";
     cin>> a;

     cout<<"Enter a value for (b): ";
     cin>> b;

     cout<<"Before swapping"<<endl;
     cout<<"a= "<<a <<endl<<"b= "<<b<<endl;

     x = a;
     a = b;
     b = x;

     cout<<"After swapping"<<endl;

     cout<<"a= "<< a<<endl <<"b= "<< b <<endl;

    return 0;
}
