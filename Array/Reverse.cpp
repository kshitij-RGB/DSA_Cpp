#include<iostream>
using namespace std;

void revArr(int arr[]){
    int i=0,j=4;
    while(j>i){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main(){
    int arr[5] = {13,6,1,36,88};
    revArr(arr);
    return 0;
}