#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int> arr1, vector<int> arr2){
    int i=0,j=0;
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> ans;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n1){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<n2){
        ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1,2,3,4,8};
    vector<int> arr2 = {2,9};
    vector<int> result = mergeArrays(arr1,arr2);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}