
//Write a program to calculate the average of two integers and display the result as a floating-point value using explicit type casting.

#include<iostream>
using namespace std;

int main()
{

    int a,b,average;


    cout<<"enter the value of a : ";
    cin>>a;

    cout<<"enter the value of b :";
    cin>>b;

    average=(float)(a+b)/2;

    cout<<"average value of two numbers is : "<<average;

    return 0;





}
