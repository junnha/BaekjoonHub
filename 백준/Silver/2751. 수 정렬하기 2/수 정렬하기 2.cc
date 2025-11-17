#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    vector<int> arr;
    
    cin >> N;
    for(int i=0;i<N;i++) {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());

     for(int i=0;i<N;i++) {
        cout << arr[i] << '\n';
    }
}