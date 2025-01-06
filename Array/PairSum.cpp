#include<iostream>
#include<vector>
using namespace std;
vector<int>PS(vector<int> nums,int target){
    vector<int> ans;
    int n = nums.size();

    int i=0,j=n-1;
    
    while(i<j){
        int PS = nums[i]+nums[j];
        if(PS>target){
            j--;
        }
        else if (PS<target) 
        {
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}


int main(){
    vector<int>nums = {2,7,11,15};
    int target = 22;
    vector<int>ans = PS(nums,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}