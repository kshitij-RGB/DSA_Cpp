#include<iostream>
#include<vector>
using namespace std;

//O(n^2)

void selectionSort(vector<int> arr, int n){
    for(int i=0;i<n;i++){
        int mini = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
                int temp=arr[mini];
                arr[mini]=arr[i];
                arr[i]=temp;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}


int main(){
    vector<int> arr= {4,3,5,2,1};
    int n = arr.size();
    selectionSort(arr,n);
    return 0;
}