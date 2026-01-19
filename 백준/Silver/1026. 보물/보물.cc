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
int arr1[100];
int arr2[100];

void solve() {
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> arr1[i];
    }
    for(int i=0;i<N;i++) {
        cin >> arr2[i];
    }
    sort(arr1,arr1+N);
    sort(arr2,arr2+N);
    int ans = 0;
    for(int i=0;i<N;i++) {
        ans += arr1[i] * arr2[N-i-1];
    }
    cout << ans;
}

int main() {
    fastIO;
    solve();
}