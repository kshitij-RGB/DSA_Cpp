#include<iostream>
#include<vector>
using namespace std;

void sortedUnionArr(vector<int> a,vector<int> b){
    int n1 = a.size();
    int n2 = b.size();
    int i=0,j=0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArr.size()==0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(unionArr.size()==0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
    }
    while(i<n1){
        if(unionArr.size()==0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
    }
    
    for(int i=0;i<unionArr.size();i++){
        cout<<unionArr[i];
    }

}


int main(){
    vector<int> arr1 = {1,1,2,3,4,5,9};
    vector<int> arr2 = {2,3,4,4,5,6,7,8};
    sortedUnionArr(arr1,arr2);
}