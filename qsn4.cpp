
     //Write a program to calculate gross salary using basic salary and allowances.
     //Gross Salary = 𝐵 + HRA + DA + Other Allowances

      #include<iostream>
      using namespace std;

      int main(){

      float gross_salary,basic_salary,hra,da,other_allowances;
    cout<<"Enter basic salary : ";
    cin>>basic_salary;
    cout<<"Enter HRA : ";
    cin>>hra;
    cout<<"Enter DA : ";
    cin>>da;
    cout<<"Enter other allowances : ";
    cin>>other_allowances;
    gross_salary = basic_salary + hra + da + other_allowances;
    cout<<"Gross salary is "<<gross_salary;

      }
