#include<iostream>

using namespace std;
int main(){
    float d=34.5F;
    long double e=34.5L;

    cout<<"The size of 34.5 is: "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.5f is: "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.5F is: "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.5l is: "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.5L is: "<<sizeof(34.4L)<<endl;

    cout<<endl<<"The value of d is "<<d<<endl<<"The vale of e is: "<<e;

    return 0;
}