#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int MAX = 10000;
    int count[MAX + 1] = {};

    int N;
    cin >> N;

    for(int i=0;i<N;i++) {
        int k;
        cin >> k;
        count[k]++;
    }

    for(int i = 0; i <= MAX; i++) {
        while(count[i]--) {
            cout << i << '\n';
        }
    }
}