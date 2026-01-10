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

void solve() {
    int N;
    cin >> N;
    int arr[1004];
    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }
    sort(arr,arr+N);
    for(int i=0;i<N;i++) {
        cout << arr[i] << '\n';
    }
}

int main() {
    fastIO;
    solve();
}