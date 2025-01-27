#include<bits/stdc++.h>
using namespace std;

bool isValid(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return true;
    }
    return false;
}

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A'); 
    }
    return ch; 
}

    
bool checkPalindrome(const string& temp) {
    int st = 0, end = temp.length() - 1;
    while (st < end) {
        if (temp[st] != temp[end]) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}


bool isPalindrome(string s) {
    string temp = "";

    for (int i = 0; i < s.length(); i++) {
        if (isValid(s[i])) {
            temp.push_back(toLowerCase(s[i]));
        }
    }
    return checkPalindrome(temp);
}

int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s);
}