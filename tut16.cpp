//Call by Value and Call by Reference

#include<iostream>
using namespace std;

//Normal Swapping
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//Swap by Pointer Reference
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Swap by Reference Variable
void swapRef(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x=12, y=23;
    cout<<"The value of a is: "<<x<<" The value of b is: "<<y<<endl;

    swap(x, y);
    cout<<"After swapping by using Normal Swap."<<endl;
    cout<<"The value of a is: "<<x<<" The value of b is: "<<y<<endl;
    cout<<"Nothing Happened."<<endl;

    cout<<"The value of a is: "<<x<<" The value of b is: "<<y<<endl;
    swapPointer(&x, &y);
    cout<<"After swapping by using Pointer Reference."<<endl;
    cout<<"The value of a is: "<<x<<" The value of b is: "<<y<<endl;

    cout<<"The value of a is: "<<x<<" The value of b is: "<<y<<endl;
    swapRef(x, y);
    cout<<"After swapping by using Pointer Reference."<<endl;
    cout<<"The value of a is: "<<x<<" The value of b is: "<<y<<endl;
    return 0;
}