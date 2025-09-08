#include <iostream>

using namespace std;

int main()
{
    int num = 5;
    int fac = 1;
    int i = 1;
    while (i<=num){
        fac *= i;
        i++;
    }
    cout<<"The factorial of "<<num<< "is: "<<fac<<endl;
    return 0;
}
