#include<iostream>
using namespace std;

//Creating a Class with name student.
class employee{
    private:
        int a, b, c;
    public:
        int d, e;
    
    void setdata(int a1, int b1, int c1);
    void getdata(){
        cout<<a<<endl; //a,b,c can only be access inside the class.
        cout<<b<<endl;
        cout<<c<<endl;
    }
};
void employee :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}


int main(){
    employee raunit;
    //harry.a=123 this will show an error because a is a private attribute.
    raunit.d = 34;
    raunit.e = 89;
    raunit.setdata(1,2,4); 
    raunit.getdata();
    cout<<raunit.d<<endl; //Here we can see that d and e can be access outside the class.
    cout<<raunit.e<<endl;

    return 0;
  
}