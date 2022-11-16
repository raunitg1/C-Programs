/* **************Union Money****************
Union money is similar to structure. This provide better Memory management. 
Previous we created structure of employee
struct employee
{
    /* data 
    int id;         this use 4 kb memory
    char favChar;    this use 1 kb memory
    float salary;     this use 3 kb memory
};
Total memory use ---> 8kb. In Union Money only 4 kb memory alloted to this , we can use any one of the following three.  */

#include<iostream>
using namespace std;
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
        union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        return 0;
}

