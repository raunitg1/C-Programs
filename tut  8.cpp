#include<iostream>
using namespace std;
int main(){
    //Operator Precedence
    int a,b,c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    c=(a+b)*2+b/2;
    //In this case First bracket is solving the multiplying with 2 and then it is adding with b/2.
    cout<<"The value of c is "<<c<<endl;

    c=(a*5+b-45+87);
    cout<<"The value of c is "<<c<<endl;
    return 0;

}