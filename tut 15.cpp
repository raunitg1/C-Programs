/* ***************Function Prototype****************
When in program Function is written after main program. Then we can not use it,s functionality before. 
Because in C++ execution take place line to line.
So Function prototype assured that, There is a possiblity of presence of function. */

#include<iostream>
using namespace std;

//Function Prototype
//type function_name (argument);

int sum(int a, int b);
int main(){
    int num1, num2;
    //num1 and num2 are actual parameter.
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"The of a and b is: "<<sum(num1, num2)<<endl;
    return 0;

}
int sum(int a, int b){ //Function is after the main function.
    //a and b are formal parameter which takes the value from actual parameter.
    int c=a+b;
    return c;
}