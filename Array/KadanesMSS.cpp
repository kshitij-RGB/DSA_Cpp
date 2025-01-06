#include<iostream>
#include<vector>
using namespace std;
int
int maxSubArray(vector<int> vec){
    int Curr = 0;
    for(int val:vec){
        Curr+=val;
        Max= max(Curr,Max);
        if (Curr<0)
        {
            Curr=0;
        }


        
    }
    return Max;
}


int main(){
    maxSubArray({1,2,3,-4,5,-1,6});
    cout<<Max;
}