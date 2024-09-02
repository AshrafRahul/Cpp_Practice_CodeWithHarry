#include<iostream>

using namespace std;
int main(){
    int a = 20;
    float b = 45.58;
    cout<<"The value of b is: "<<(int)b<<endl;
    cout<<"The value of b is: "<<int(b)<<endl<<endl;
    
    cout<<"The expression is: "<<a+b<<endl;
    cout<<"The expression is: "<<a+(int)b<<endl;
    cout<<"The expression is: "<<a+int(b)<<endl;
    

    return 0;
}