#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minpq(type) priority_queue<type, vector<type>, greater<type>>
#define maxpq(type) priority_queue<type>

#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    // 5, 25, 125, ... 로 나누면서 5가 몇 번 들어 있는지 누적
    for (int div = 5; div <= N; div *= 5) {
        cnt += N / div;
    }
    cout << cnt;
}