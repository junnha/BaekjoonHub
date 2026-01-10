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
    ll arr[1000001];
    int N;
    cin >> N;

    for(int i=0;i<N;i++) {
        string str;
        cin >> str;
        reverse(str.begin(),str.end());
        arr[i] = stol(str);
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