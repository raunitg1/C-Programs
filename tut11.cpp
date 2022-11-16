#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<10; i++){

        if (i==6){
            break; //break statement is used to end loop when given value occur.
        }
        cout<<i<<endl;

        if(i==3){
            continue; //continue statement is used to leave the loop for that given value.
        }
        cout<<i<<endl;

    }
}