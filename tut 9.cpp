//This is Switch Case
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Please enter your age"<<endl;
    cin>>a;

    switch (a)
    {
    case 12:
        cout<<"You are 12"<<endl;
        break;
    case 21:
        cout<<"You are 21"<<endl;
        break;
    
    default:
        cout<<"This is exceptional"<<endl;
        break;
    }
}