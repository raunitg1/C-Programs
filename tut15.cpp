/**************Function***************
It is used to make any program easy. We can create function and it's functionality
can be used in program many times.
*/
#include<iostream>
using namespace std;
int sum(int a, int b){ //sum is function which has functionality to add two number.
    int c = a+b;
    return c;
}
int main(){
    int num1, num2;
    cout<<"Enter the value of num1: "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2: "<<endl;
    cin>>num2;
    cout<<"The sum is: "<<sum(num1, num2); //Here, I am using the function sum.
    return 0;


}