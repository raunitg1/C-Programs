/* ----------------------Inline Function-----------------------
What is inline function ?
When create any funcction like function for product. If we want to use this function for many output. 
In this case It will take alot of time because if we create a function then first it take value then go to function 
for solving. After this it return to Output.

So in order to reduce time we can simply use inline function. Now this function will run in all outp line. 
No need to retun value to function

When we can't use Inline Function ?
If function is short then we can use inline. but function is long then it will take alot of space.
Do not use inline function for Recursion.
Do not use inline function for static Variable. */

#include<iostream>
using namespace std;

//Here i am using a inline function which is used to reduce time if i wish to print product more than one time.
inline int product(int a, int b){
    return a*b;
}
int main(){
    int a, b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    return 0;
}