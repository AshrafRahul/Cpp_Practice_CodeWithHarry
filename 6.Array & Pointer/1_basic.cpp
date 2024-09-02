#include<iostream>

using namespace std;
int main(){
    int marks[] = {12,45,65,35};

    //using for loop
    for(int i=0; i<4; i++){
        cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
    }

    //using while loop
    cout<<endl;
    int i=0;
    while(i<4){
        cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
        i++;
    }

    //using do-while loop
    cout<<endl;
    i=0;
    do{
        cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
        i++;
    }while(i<4);


    return 0;
}