#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int> arr){
    int st = 1, end = arr.size()-2; //st and end are optimized to handle edge cases

    while(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]<arr[mid]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}


int main(){
    vector<int> arr = {3,5,7,8,6,2};
    cout<<"The peak of array is at index: "<<peakIndexInMountainArray(arr);
}