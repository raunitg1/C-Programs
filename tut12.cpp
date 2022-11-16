/* *************Pointer*****************
What is POINTER ?
It is a data type which hold the address of other data types.
For Example a is Variable which is stored in Ram. So to find address of that variable in Ram we use Pointer.
There are of two types operator in this-
1- (Address of) operator ---------> &
2- (Value at) operator or Dereference operator -----------> *
*/

#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b = &a; //I am going to find address of a.
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The value at address of b is: "<<*b<<endl;

    //Pointer to Pointer
    int** c=&b;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The value at address of c is: "<<*c<<endl;



}