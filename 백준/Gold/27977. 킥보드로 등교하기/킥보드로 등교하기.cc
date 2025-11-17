#include<bits/stdc++.h>
using namespace std;
int l, n, k;
vector<int> s;

bool check(int mid) {
    // 한 번 충전으로 mid까지 갈 때 k번 이하로 충전 체크
    int cnt = 0, dist = 0;

    for (int i = 1; i < s.size(); i++) {
        int d = s[i] - s[i - 1];
        if (d > mid) return false; // 용량이 부족해 불가능
        if (dist + d > mid) {
            // 배터리 용량이 거리 합보다 작을 때
            cnt++;
            dist = 0;
        }
        dist += d; // 누적 거리 카운트
    }
    return cnt <= k;
}


int main() {
    cin.tie(NULL);  ios_base::sync_with_stdio(false);
    cin >> l >> n >> k;
    s.push_back(0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push_back(x);
    }
    s.push_back(l);
    int lo = 0;
    int hi = l;

    while (lo + 1 < hi) {
        int mid = ((lo + hi) / 2);
        if (check(mid)) hi = mid;
        else lo = mid;
    }
    cout << hi;
}
