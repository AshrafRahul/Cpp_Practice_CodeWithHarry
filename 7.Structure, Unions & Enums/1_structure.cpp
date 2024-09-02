#include<iostream>

using namespace std;

typedef struct employee{
    /* data */
    int eID;
    char favChar;
    float salary;
};

int main(){
    struct employee ashraful;
    struct employee rahul;
    
    ashraful.eID = 1;
    ashraful.favChar = 'A';
    ashraful.salary = 1254874;

    cout<<ashraful.eID<<endl<<ashraful.favChar<<endl<<ashraful.salary<<endl;

    return 0;
}