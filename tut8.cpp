#include<iostream>
#include<iomanip> //iomanip is also a header file.
using namespace std;
int main(){
    int a=1,b=12,c=223;

    //setw is use to print number in order that number will start from left side.
    //setw is under header file iomanip

    cout<<"Without using 'setw'"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    cout<<"By using 'setw'"<<endl;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    return 0;

}