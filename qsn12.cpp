//Write a program to calculate the area and circumference of a circle using the following formulae:Area of Circle = 𝜋𝑟2 Circumference of Circle = 2𝜋𝑟


#include<iostream>
using namespace std;

int main()
{

    float area,circumference,radius;
    float pi=3.14;

    cout<<"enter the radius :  ";
    cin>>radius;

    area=pi*radius*radius;

    cout<<"area of circle is : "<<area;

    circumference=2*pi*radius;
    cout<<"\ncircumference of circle is : "<<circumference;

    return 0;


}
