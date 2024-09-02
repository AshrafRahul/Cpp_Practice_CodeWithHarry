#include<iostream>

using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    switch (age){
        case 18:
            cout<<"You are adult now"<<endl;
            break;
        case 25:
            cout<<"You have to complete your graduation within this age"<<endl;
            break;
        case 50:
            cout<<"You are old now"<<endl;
            break;
        default:
            cout<<"Enter right age"<<endl;
    }

    return 0;
}