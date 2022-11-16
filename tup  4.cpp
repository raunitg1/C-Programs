#include<iostream>
using namespace std;
//Checking whether Global & Local varriable can be of same name
//Introducing global variable with glo name.
int glo=12;
int main(){
    //Introducing local variable with same glo name.
    int glo=341;
    cout<<"Local varribale will get precedence. And the value is "<<glo;
    cout<<endl;
    //Now Using Scope resolution Operator. This is used to give priority to Global Varriable.
    //For Example-
    cout<<"Value of Global Variable is "<<::glo;
    return 0;

}