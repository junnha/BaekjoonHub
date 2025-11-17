#include<bits/stdc++.h>

using namespace std;
vector<int> s;
int n, c;

bool check(int mid) {
    int cnt = 1;
    int last = s[0];
    for (int i = 1; i < s.size(); i++) {
        if (s[i] - last >= mid) {
            cnt++;
            last = s[i];
        }
    }
    return cnt >= c;
}

int main() {
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push_back(x);
    }
    sort(s.begin(), s.end());
    int lo = 0;
    int hi = 100000000001;

    while (lo + 1 < hi) {
        int mid = ((lo + hi) / 2);
        if (check(mid)) lo = mid;
        else hi = mid;
    }
    cout << lo;
}