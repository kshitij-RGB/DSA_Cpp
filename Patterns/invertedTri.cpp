#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";

        }
        for(int j=i;j<n;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
// 1111
//  222
//   33
//    4