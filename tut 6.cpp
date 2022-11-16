#include<iostream>
using namespace std;
int main(){
    //What are operators.
    //Assignment Operator - Which are used to assign the value. For example: a=20, b=5
    int a=20, b=5;
    cout<<"Let see How many types of Operator in C++.\n";
    //Arithmetic Operator
    cout<<"Arithmetic Operator"<<endl;
    cout<<"a+b = "<<a+b<<endl; //Addition
    cout<<"a-b = "<<a-b<<endl; //Subtraction
    cout<<"a/b = "<<a/b<<endl; //Division
    cout<<"a*b = "<<a*b<<endl; //Multiplication
    cout<<"a%b = "<<a%b<<endl; //Modulous
    cout<<"a++ = "<<a++<<endl; //Increement
    cout<<"a-- = "<<a--<<endl; //Decreement
    cout<<"++a = "<<++a<<endl; //First Increement
    cout<<"--a = "<<--a<<endl; //First Decreement

    //Comparision Operator
    cout<<endl;
    cout<<"Comparision Operator"<<endl;
    cout<<"Is a==b ? "<<(a==b)<<endl;
    cout<<"Is a!=b ? "<<(a!=b)<<endl;
    cout<<"Is a>=b ? "<<(a>=b)<<endl;
    cout<<"Is a<=b ? "<<(a<=b)<<endl;
    cout<<"Is a>b ? "<<(a>b)<<endl;
    cout<<"Is a<b ? "<<(a<b)<<endl;

    //Logical Operator
    cout<<endl;
    cout<<"Logical Operator\n";
    cout<<"Logical And Operator. Is ((a==b)&&(a<b)) ? "<<((a==b)&&(a<b))<<endl;
    cout<<"Logical Or Operator. Is ((a==b)||(a<b)) ? "<<((a==b)||(a<b))<<endl;
    cout<<"Logical Not Operator. Is (!(a==b)) ? "<<(!(a==b))<<endl;

    //Reference Variable
    int & d=a; //this is used to relocate the same value with another variable name.
    cout<<d<<endl;

    //Type Casting
    //This method is used to Convert the one data type into another data type.
    //For Example
    float x=20.32;
    cout<<"The value of x in Integrer is "<<int(x);


    //Constants in C++
    //These value cannot be changed after assignment.
    //For Example
    // const int y=123;
    // y=3;
    // cout<<y;
    //It will show error.

    return 0;


}