// Write a program in C++ that uses the reference variable concept and demonstrate the function pass by reference method

#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "Before swapping a = " << a << " and b = " << b << endl;
    swap(a, b);
    cout << "After swapping a = " << a << " and b = " << b << endl;
    return 0;
}