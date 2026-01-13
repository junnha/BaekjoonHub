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

int N;
int arr[100005];
int d[100005];
void solve() {
    cin >> N;

    int best = -100000;
    d[0] = 0;

    for (int i=1;i<=N;i++) {
        cin >> arr[i];
        if (i == 1) d[i] = arr[i];
        else d[i] = max(arr[i],d[i-1]+arr[i]);
        best = max(best, d[i]);
    }
    cout << best;
}

int main() {
    fastIO;
    solve();
}