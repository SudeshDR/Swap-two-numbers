#include<iostream.h>
#include<conio.h>
 void swap(int& num1, int& num2){
     int temp=num1;
     num1=num2;
     num2=temp;
 }
 int main()
 {
     int a,b;
     cout<<"ENTER THE FIRST NUMBER:";
     cin>>a;
     cout<<"ENTER THE SECOND NUMBER:";
     cin>>b;

     cout<<"BEFORE SWAPPING:"<<endl;
     cout<<"FIRST NUMBER:"<<a<<endl;
     cout<<"SECOND NUMBER:"<<b<<endl;

     swap(a,b);

     cout<<"AFTER SWAPPING:"<<endl;
     cout<<"FIRST NUMBER:"<<a<<endl;
     cout<<"SECOND NUMBER:"<<b<<endl;

     return 0;
     getch();
 }