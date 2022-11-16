/*This is loop.
There are 3 types of loop:
1-For Loop
   i- Finite For Loop
   ii- Infinite For Loop
2-While Loop
   i- Finite While Loop
   ii- Infinite While Loop
3-Do While Loop*/
 //**************For Loop***************
 #include<iostream>
 using namespace std;
 int main(){
    for (int i = 1; i <= 10; i++) //This is finite loop because condition wiil be true only for i <= 20.
    {
        cout<<i<<endl;
    }
    
    //For Infinite Loop use i=10. This condition will true every time.
    //For example
    for (int i = 1; i = 10; i++)
    {
        cout<<"This is Infinite Loop"<<endl;
    }
    
 }