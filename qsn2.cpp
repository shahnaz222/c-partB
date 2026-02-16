//. Write a program to swap two numbers without using a third variable


#include<iostream>
using namespace std;

int main()
{

    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping the numbers : ";
    cout<<"\nFirst number = "<<a;
    cout<<"\nSecond number = "<<b;
    return 0;
}

