// Write a pogram to add one static and one non static data member to user defined class and access them by static and non static member functions respectively.


#include<iostream>
using namespace std;

class A
{
    int a;
    static int b;
    public:
    void getData()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
    }
    void display()
    {
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
    }
};

int A::b;

int main()
{
    A obj;
    obj.getData();
    obj.display();
    return 0;
}
