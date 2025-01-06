#include<iostream>
using namespace std;


int decToBin(int DeciNum){
    int ans=0;
    int power=1;
    while (DeciNum>0)
    {
        int rem = DeciNum%2;
        DeciNum=DeciNum/2;
        ans += power * rem;
        power *= 10;

    }
    return ans;
}

int binToDec(int BinNum){
    int ans=0;
    int power=1;
    while(BinNum>0){
        int rem = BinNum%10;
        BinNum /=10;
        ans += rem*power;
        power*=2;    
    }
    return ans;
}

int main(){
    // int DeciNum;
    // cin>>DeciNum;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<decToBin(i)<<endl;
    // }

    int n;
    cin>>n;
    cout<<binToDec(n);
    
    
    return 0;
    
}
