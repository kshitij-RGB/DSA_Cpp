#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr) {

    int n = arr.size() + 1;
    int expectedSum = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    
    return expectedSum - sum;
}

int main() {
    vector<int> arr = {};
    cout << missingNumber(arr);
    return 0;
}