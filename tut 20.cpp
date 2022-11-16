#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;

};

int main(){
    student a;
    a.name ="Raunit";
    a.age=20;
    
    cout<<a.name<<endl;
    cout<<a.age<<endl;
    
    return 0;

}