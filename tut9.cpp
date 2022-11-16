//***************Control Structure****************
//There are 3 types of Control structure in C++
/*
1- If Else structure
2- Loop Structure
Sequence Structure*/

//This is If Else Sturcture
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your age"<<endl;
    cin>>a;
    if ((a>=18) && (a>1)){
        cout<<"You are Eligible to Vote"<<endl;
    }
    else if(a<1){
        cout<<"You are not yet Born"<<endl;
    }

    else{
        cout<<"You are not Eligible.";
    }
    return 0;

}