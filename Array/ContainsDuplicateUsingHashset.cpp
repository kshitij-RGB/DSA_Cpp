#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> arr){
    unordered_set<int> set;
    for(int i=0;i<arr.size();i++){
        if(set.count(arr[i])>0){
            return true;
        }
        set.insert(arr[i]);
    }
    return false;
}

int main(){
    vector<int> arr = {1,2,3,4,4};
    cout<<containsDuplicate(arr);
}