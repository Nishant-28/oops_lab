// Write a program in C++ to create overloaded function area to compute area of circle, rectangle and square


#include<iostream>
using namespace std;

float area(float r)
{
    return 3.14*r*r;
}

int area(int l, int b)
{
    return l*b;
}

int area(int s)
{
    return s*s;
}

int main()
{
    int ch;
    float r, a;
    int l, b, s;
    cout<<"Enter the choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"Enter the value of r: ";
            cin>>r;
            a = area(r);
            cout<<"Area of circle is: "<<a<<endl;
            break;
        case 2:
            cout<<"Enter the value of l: ";
            cin>>l;
            cout<<"Enter the value of b: ";
            cin>>b;
            a = area(l,b);
            cout<<"Area of rectangle is: "<<a<<endl;
            break;
        case 3:
            cout<<"Enter the value of s: ";
            cin>>s;
            a = area(s);
            cout<<"Area of square is: "<<a<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}