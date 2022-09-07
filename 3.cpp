// Write  a program in C++ to justify the use of default arguments that computes the simple interest with default rate of interest as 8.5%

#include<iostream>
using namespace std;

float simple_interest(float p, float t, float r=8.5)
{
    return (p*t*r)/100;
}

int main()
{
    float p, t, r;
    cout<<"Enter the value of p: ";
    cin>>p;
    cout<<"Enter the value of t: ";
    cin>>t;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<"Simple interest is: "<<simple_interest(p,t,r)<<endl;
    return 0;
}