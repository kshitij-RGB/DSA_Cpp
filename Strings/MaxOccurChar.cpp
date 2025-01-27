#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string& s) {
    int arr[26] ={};
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch>='a' && ch<='z'){
            arr[ch-'a']++;
        }
        else{
            arr[ch - 'A']++;
        }
    }
    int maxi= -1,index=-1;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            index=i;
        }
    }
    char ans = 'a'+index;
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<getMaxOccuringChar(str);
}
