//This is Do While loop.
#include<iostream>
using namespace std;
int main(){
    int i=1;
    do
    {
        cout<<i<<endl;
        i++;
       
    } while (i<=10); //This finite Loop. Condtion will be true only for i<=10.

    do
    {
        cout<<i<<endl;
        i++;
    } while (true); //This infinite Loop. Condtion will be always true and enter the loop.
    
}