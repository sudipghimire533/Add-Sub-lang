#include<iostream>

using namespace std;

float addFun(float, float);

float subFun(float, float);

int main()

{

    float num1, num2;

    char op;

    cout<<"Enter Two Numbers: ";

    cin>>num1>>num2;

    cout<<"Enter the Operator (+, -):";

    cin>>op;

    if(op=='+')

        cout<<endl<<"Addition Result = "<<addFun(num1, num2);

    else if(op=='-')

        cout<<endl<<"Subtraction Result = "<<subFun(num1, num2);

     

   else

        cout<<endl<<"Wrong Operator!";

    cout<<endl;

    return 0;

}

float addFun(float a, float b)

{

    return a+b;

}

float subFun(float a, float b)

{

    return a-b;

}

