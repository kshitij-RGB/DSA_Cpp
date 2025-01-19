#include<iostream>
using namespace std;

int missingNumberInArray(int arr[], int n){
    int sum1 = (n * (n+1))/2;
    int sum2 = 0;
    for(int i=0;i<n-1;i++){
        sum2+=arr[i];
    }
    return (sum1-sum2);
}

int main(){
    int arr[] = {1,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<missingNumberInArray(arr,n);
}