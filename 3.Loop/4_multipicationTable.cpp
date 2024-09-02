#include<iostream>

using namespace std;
int main(){
    int n, i;
    cout<<"Enter any number: ";
    cin>>n;

    cout<<endl<<"Multipication table of "<<n<<" is: "<<endl;
    //for loop
    for(i=1; i<=10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

    cout<<endl<<endl;

    //while loop
    i=1;
    while(i<=10){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        i++;
    }

    cout<<endl<<endl;
    //do-while loop
    i=1;
    do{
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        i++;
    }while(i<=10);


    return 0;
}