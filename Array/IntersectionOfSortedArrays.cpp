#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> arr1,vector<int> arr2){
    vector<int> ans;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
    return ans;
}

int main(){
    vector<int> arr1 = {1,1};
    vector<int> arr2 = {1,1,1,2};
    vector<int>result = intersection(arr1,arr2);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}

