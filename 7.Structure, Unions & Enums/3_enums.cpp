#include<iostream>

using namespace std;
int main(){
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;
    
    cout<<m1<<endl<<m2<<endl<<m3<<endl;
    cout<<(m1==2);

    return 0;
}