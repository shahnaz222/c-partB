
      //Write a program to input marks of three subjects and calculate total and percentage.


               #include<iostream>
               using namespace std;
               int main(){

               float sub1,sub2,sub3,total_marks,percentage;


               cout<<"enter the marks of sub1 : ";
               cin>>sub1;

               cout<<"enter the marks of sub2 : ";
               cin>>sub2;

               cout<<"enter the marks of sub3: ";
               cin>>sub3;

               total_marks=sub1+sub2+sub3;
               percentage=(total_marks/300)*100;

               cout<<"marks pf total subject is : "<<total_marks;
               cout<<"\npercentage = "<<percentage;

               return 0;



               }
