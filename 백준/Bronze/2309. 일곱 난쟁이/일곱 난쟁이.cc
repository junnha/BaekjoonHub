#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[9];
    vector<int> res;
    int sum = 0;

    for(int i=0;i<9;i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    for(int j=0;j<9;j++) {
        for(int k=1;k<9;k++) {
            if (j==k) continue;
            if (sum - arr[j] - arr[k] == 100){
                for (int p = 0; p < 9; p++) {
                if (p == j || p == k) continue;
                res.push_back(arr[p]);
            }
            sort(res.begin(), res.end());
            for (int x : res) cout << x << '\n';
            return 0;
            }
        }

    }
}