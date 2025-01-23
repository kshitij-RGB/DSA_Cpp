#include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int>arr, int tar){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==tar){
                ans.push_back(min(arr[i],arr[j]));
                ans.push_back(max(arr[i],arr[j]));
            }
        }
    }
    
    return ans;
}

int main(){
    vector<int> arr = {3,1,2,4};
    int tar = 5;
    vector<int> ans = pairSum(arr,tar);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}