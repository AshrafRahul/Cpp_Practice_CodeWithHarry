#include<iostream>

using namespace std;
int main(){
    int age;
    cout<<"Tell me your age: ";
    cin>>age;

    if(age<18){
        cout<<"Sorry!"<<endl<<"You cannot enter to this conference"<<endl;
    }
    else if(age == 18){
        cout<<"You can enter"<<endl<<"First show me your ID"<<endl;
    }
    else{
        cout<<"Welcome!"<<endl<<"You can enter to this conference"<<endl;
    }

    return 0;
}