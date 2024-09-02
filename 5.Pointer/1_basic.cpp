#include<iostream>

using namespace std;
int main(){
    int a=3;
    int* b=&a;

    //&-----> (address of) operator
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;

    // * ------> (value at) Deference of operator
    cout<<"The value at address b is: "<<*b<<endl;
    return 0;
}