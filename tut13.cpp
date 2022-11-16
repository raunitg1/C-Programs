/* ************Array*************
Suppose we have to assign Marks of 250 students. So in this case we have to Create 250 variables. This can not be possible practically.
So Array is come to help us. We can Assign All 250 students's marks in a single variable.
we can do this By using -----> marks[] = {21,343,42,234,........}
Now, all values has been assigned
*/

#include<iostream>
using namespace std;
int main(){
    int marks[] = {32,43,23,21};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //Now Print marks using For Loop.
    cout<<"These are Marks of the student. (By using For Loop)"<<endl;
    for (int i = 0; i < 4; i++) 
    {
        cout<<"The marks of the student "<<i<<"is: "<<marks[i]<<endl;
    }
    
    //Now print using While Loop.
    cout<<"These are Marks of the student. (By using While Loop)"<<endl;
    int i=0;
    while (i<4)
    {
        cout<<"The marks of the student "<<i<<"is: "<<marks[i]<<endl;
        i++;
    }

    //Now print using Do While Loop.
    cout<<"These are Marks of the student. (By using Do While Loop)"<<endl;
    i=0;
    do
    {
         cout<<"The marks of the student "<<i<<"is: "<<marks[i]<<endl;
         i++;
    } while (i<4);
    
    return 0;


}