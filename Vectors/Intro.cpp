#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> vec ={1,2,3}; 
    // vector<int> vec(5,0);
    vector<char> vec = {'a','2','c'};
    vec.push_back('k');
    vec.push_back('r');
    cout<<vec.size()<<endl;
    vec.pop_back();
    for(char val : vec){
        cout<<val<<" ";
    }
    
    
    
    

    return 0;

}