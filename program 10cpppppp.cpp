#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"enter 3 digit number";
    cin>>a;
    b=a/100;
    a=a%100;
    c=a/10;
    c=c%10;
    cout<<"the reverse number"<<a<<b<<c;
    return 0;
}
    
