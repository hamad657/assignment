#include <iostream>
using namespace std;
int main()
{
    //logical operators
    cout<<((4>6)&&(8>3))<<"\n";
    cout<<((4<8)||(3>8))<<"\n";
    cout<<!((4<8)||(3>8))<<"\n";
    int a=40;
    int b=20;
    //arithematic operators
    cout<<"result of arithematic operator are"<<"\n";
    cout<<"addition of a and b is"<<a+b<<"\n";
    cout<<"subtraction of a and b"<<a-b<<"\n";
    cout<<"multiplication of a and b"<<a*b<<"\n";
    cout<<"division of a over b"<<a/b<<"\n";
    cout<<"modulous of a over b"<<a%b<<"\n";
    //unary operators
    cout<<"increases the value of a variable by 1 using post increment"<<a++<<"\n";
    cout<<"increase the value of a variable by 1 using post increment"<<++a<<"\n";
    cout<<"decrease the value of b variable by 1 using post increment"<<b--<<"\n";
    cout<<"decrease the value of b variable by 1 using post increment"<<--b<<"\n";
    //assignment operators
    cout<<"result of assignment and compound assignment operator are"<<"\n";
    int marks=10;
    cout<<"marks are"<<marks<<"\n";
    //compound assignment operators
    marks += 10;
    marks -= 10;
    marks *= 2;
    marks /= 2;
    marks %= 2;
    //comparision operators
    cout<<(a<b)<<"\n";
    cout<<(a>b)<<"\n";
    cout<<(a<=b)<<"\n";
    cout<<(a>=b)<<"\n";
    cout<<(a!=b)<<"\n";
    cout<<(a==b)<<"\n";
    return 0;
}
