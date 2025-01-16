#include <iostream>
#include<vector>
using namespace std;

int main(){
    int b = 10;
    int* ptr1 = &b;
    cout<<"Address of b : "<<&b<<endl;
    cout<<"Address of b using ptr : "<<ptr1<<endl;
    int** ptr2 = &ptr1;
    cout<<"Address of ptr1 : "<<&ptr1<<endl;
    cout<<"Address of ptr1 using ptr 2 : "<<ptr2<<endl;
    
    //Dereference Operator (Value at address)
    cout<<"The value at address "<<ptr1<<" is "<<*(ptr1)<<endl;


    //Null
    int* ptr = NULL;
    cout<<ptr;
}