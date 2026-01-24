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

int n;

void solve() {
    cin >> n;
    if (n==1) {
        cout << "2024 8";
    } else if (n==2) {
        cout << "2025 3";
    } else if (n==3) {
        cout << "2025 10";
    } else if (n==4) {
        cout << "2026 5";
    } else if (n==5) {
        cout << "2026 12";
    } 
}

int main() {
    fastIO;
    solve();
}