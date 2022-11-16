/* ***************typedef***************
typedef is used in structure. In previous Program we used struct employee everywhere. 
So we can use typedef to use this in short form.
Previously we used struct employee. Now, we will ep in place of struct employee'
.*/
#include<iostream>
using namespace std;
typedef struct employee
{
    
    /* data */
    int id;
    char favChar;
    float salary;

}ep;

int main(){
    ep raunit;
    raunit.id=9;
    raunit.favChar='p';
    raunit.salary=89300000;
    cout<<"The Value of Raunit's id is: "<<raunit.id<<endl;
    cout<<"Raunit's favChar is: "<<raunit.favChar<<endl;
    cout<<"Raunit's Salary is: "<<raunit.salary<<endl;
    
    return 0;


}