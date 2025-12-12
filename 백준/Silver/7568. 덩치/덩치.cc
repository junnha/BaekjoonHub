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
int T;

void solve() {
    pii arr[50];
    int rank;
    for(int i=0;i<T;i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    for(int i=0;i<T;i++) {
        for(int j=0;j<T;j++) {
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second) {
                rank++;
            }
        }
        cout << rank << ' ';
        rank = 1;
    }
}
int main() {
    fastIO;
    cin >> T;
    solve();
}