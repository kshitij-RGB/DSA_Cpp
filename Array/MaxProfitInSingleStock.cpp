#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
        int maxProfit=0, bestBuy = prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]>bestBuy){
                maxProfit = max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy = min(bestBuy,prices[i]);
        }
        return maxProfit;
    }

int main(){
    vector<int> prices = {5,1,10,2,8};
    cout<<maxProfit(prices);
}