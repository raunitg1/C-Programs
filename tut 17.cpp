/*-----------------Default Arguments----------------
Default arguments is a value which is automatically assigned by the compiler.
For example if there is a default argument whose value is 1.04. if i am not any other value to it then it will use this 1,04 
value in function*/


#include<iostream>
using namespace std;

float bank(int currentMoney, float interest=1.04){
    return currentMoney*interest;
}
int main(){
    int Money;
    cout<<"Enter amount of money which you have: "<<endl;
    cin>>Money;
    cout<<"If you have "<<Money<<" rs, Then you will recieve "<<bank(Money)<<endl;
    cout<<"If you are Vip and you have "<<Money<<" rs, Then you will recieve "<<bank(Money, 1.1)<<endl;
    return 0;
    


}