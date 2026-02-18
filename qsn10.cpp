
//Write a program to check whether a character is a vowel or consonant

#include<iostream>
using namespace std;
int main()
{

    char ch;

    cout<<"enter the char : ";
    cin>>ch;
    if(ch=='A'||ch=='a' || ch=='E'||ch=='e' || ch=='I'||ch=='i'||  ch=='O'||ch=='o' || ch=='U'||ch=='u')
    {
        cout<<"the character is vowel";
    }
    else
    {
        cout<<"the character is consonant";
    }

    return 0;
}

