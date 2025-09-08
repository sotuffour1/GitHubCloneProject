#include <iostream>
 int even(int num){
    return num%2;
    }

using namespace std;

int main()
{
    int num;

    cout << "Enter a value" << endl;
    cin>>num;
    if(even(num)==0){
        cout<<"Even"<<endl;

    }else{
        cout<<"Odd"<<endl;
    }
    return 0;




}
