#include<iostream>
#include <vector>
using namespace std;
//O(n^2)
void insertionSort(vector<int>arr, int n){
    // for(int i=0;i<n;i++){
    //     int j=i;
    //     while(j>0 && arr[j-1]>arr[j]){
    //             swap(arr[j],arr[j-1]);
    //             j--;
    //     }
    // }

    for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++) {
                if(arr[j] < arr[i]) {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}



int main(){
    vector<int> arr = {3,5,4,2,1};
    int n = arr.size();
    insertionSort(arr,n);

}