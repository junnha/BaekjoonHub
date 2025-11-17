#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> height;
    
    for(int i=0;i<N;i++) {
        int k;
        cin >> k;
        height.push_back(k);
    }
    stack<pair<int, int> > s;

    for (int i = 0; i < N; ++i) {
        int cur = height[i];

        while (!s.empty() && s.top().first < cur) {
        s.pop();
        }

        if (s.empty()) {
        cout << 0 << ' ';
        } else {
            cout << s.top().second << ' ';
        }

    s.push({cur, i + 1}); 
    }
}