#include<iostream>

using namespace std;
int main(){
    int a=10, b=5;

    //Arithmetic Operator
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<"The value of b++ is: "<<b++<<endl;
    cout<<"The value of ++b is: "<<++b<<endl;
    cout<<"The value of b-- is: "<<b--<<endl;
    cout<<"The value of --b is: "<<--b<<endl;
    
    // Assignment operator
    // int a=3, b=9;
    // char d='d';

    //comparison operator
    cout<<endl<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;


    //Logical operator
    cout<<endl<<"The value of ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a!=b) && (a<b)) is: "<<((a!=b) && (a<b))<<endl;
    cout<<"The value of ((a==b) && (a>b)) is: "<<((a==b) && (a>b))<<endl;
    cout<<"The value of ((a!=b) && (a<b)) is: "<<((a!=b) && (a>b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of ((a!=b) || (a<b)) is: "<<((a!=b) || (a<b))<<endl;
    cout<<"The value of ((a==b) || (a>b)) is: "<<((a==b) || (a>b))<<endl;
    cout<<"The value of ((a!=b) || (a<b)) is: "<<((a!=b) || (a>b))<<endl;
    


    return 0;
}