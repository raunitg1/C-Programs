/* ***********Pointer and Array**************
This concept is used to tell addrress of Varriable. 
For example- In previous case There is a array of marks. Then we can find the address of that array
marks is the address of first block*/

#include<iostream>
using namespace std;
int main(){
    int marks[] = {32,43,23,21};
    int* p=marks;
    cout<<"The value of marks[0] is: "<<*p<<endl;
    cout<<"The value of marks[1] is: "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is: "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is: "<<*(p+3)<<endl;
    return 0;
}