
//Write a program to find the third angle of a triangle using the formula:Third Angle = 180◦ − (First Angle + Second Angle) where the sum of the interior angles of a triangle is 180◦ .


      #include<iostream>
      using namespace std;

      int main(){

      float first_angle,second_angle,third_angle;

      cout<<"enter the 1st angle : ";
      cin>>first_angle;

        cout<<"enter the 2nd angle : ";
      cin>>second_angle;

      third_angle = 180-(first_angle +second_angle);

      cout<<" the 3rd angle is  : "<<third_angle;

      return 0;




      }
