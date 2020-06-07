#include <iostream>
#include<cmath>
#include <stdlib.h>

using namespace std;
int main()
{
    int cho;
    int a;
    int num1;
    int num2;
    double Result;



    cout << "                    Calculator V 1.0            "<<endl;


    cout<<"\n\n\n\n\nPress Enter to continue........"<<endl ;

cin.ignore();



    cout<<"What Operation do you want to perform?"<< endl;
    cout<<"1:Addition"<<endl;
    cout<<"2:Subtraction"<<endl;
    cout<<"3:Multiplication"<<endl;
    cout<<"4:Division"<<endl;
    cout<<"5:Remainder"<<endl;
    cout<<"6:Square Root"<<endl;
    cout<<"7:Power"<<endl;
while(a!=0)
    {
    cout<<"\n\n\n\nChoice:";
    cin>> cho;

    if(cho==1)
    {


   cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;
Result=num1+num2;
cout<<"Result : "<<Result;
}


  if(cho==2)
    {
  system("cls");

   cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;
Result=num1-num2;
cout<<"Result : "<<Result;
}

 else if(cho==3)
    {
   system("cls");
   cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;
Result=num1*num2;
cout<<"Result : "<<Result;
}

 else if(cho==4)
    {
system("cls");

   cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;
Result=num1/num2;
cout<<"Result : "<<Result;
}

else if(cho==5)
    {
system("cls");

   cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;
Result=num1%num2;
cout<<"Result : "<<Result;
}


else if(cho==6)
    {
system("cls");

   cout<<"Enter number :";
cin>>num1;
 Result=sqrt(num1);
cout<<"Result : "<<Result;
}

else if(cho==7)
    {
system("cls");

    int exponent;
    float base, result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    cout << base << "^" << exponent << " = ";

    while (exponent != 0) {
        result *= base;
        --exponent;
    }

    cout << result;

}

else if(cho>7)
    {
    cout<<"Incorrect input"<<endl;
}
    }






    return 0;
}
