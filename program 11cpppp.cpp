#include<iostream>
using namespace std;
int main()
{
    int miles;
    int kilometers;
    double const M=1.609;
    cout<<"enter the distance in miles";
    cin>>miles;
    kilometers=miles*M;
    cout<<"distance in mile"<<miles<<"\n";
    cout<<"distance in kilometers"<<kilometers<<"\n";
    return 0;
}
    
