/* ***************Structure***************
Structure is same as Array. But the difference is that Array can be used only if all the data types are same. 
But structure can be used for diffent different data types.*/
#include<iostream>
using namespace std;
struct employee
{
    
    /* data */
    int id;
    char favChar;
    float salary;

};

int main(){
    struct employee raunit;
    raunit.id=9;
    raunit.favChar='p';
    raunit.salary=89300000;
    cout<<"The Value of Raunit's id is: "<<raunit.id<<endl;
    cout<<"Raunit's favChar is: "<<raunit.favChar<<endl;
    cout<<"Raunit's Salary is: "<<raunit.salary<<endl;
    
    return 0;


}