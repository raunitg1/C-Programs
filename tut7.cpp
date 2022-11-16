#include<iostream>
using namespace std;
int main(){
    //By default any decimal value is taken as double. So to assign float value we can use the letter 'f' or 'F' at last of the value.
    //Similarly, To assign long double calue we can use the letter 'l' or 'L'.
    float d = 31.4f;
    long double e = 31.4l;

    cout<<d<<endl;
    cout<<e<<endl;
    cout<<"The size of 31.4 is "<<sizeof(31.4)<<endl;
    cout<<"The size of 31.4f is "<<sizeof(31.4f)<<endl;
    cout<<"The size of 31.4F is "<<sizeof(31.4F)<<endl;
    cout<<"The size of 31.4l is "<<sizeof(31.4l)<<endl;
    cout<<"The size of 31.4L is "<<sizeof(31.4L)<<endl;
    return 0;

}