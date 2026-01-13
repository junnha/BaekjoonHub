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

int arr[3];

void solve() {
    for(int i=0;i<3;i++)
    cin >> arr[i];
    sort(arr,arr+3);
    for(int i=0;i<3;i++)
    cout << arr[i] << ' ';
}

int main() {
    fastIO;
    solve();
}