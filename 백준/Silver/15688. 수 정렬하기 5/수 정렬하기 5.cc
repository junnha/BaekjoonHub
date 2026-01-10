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

int arr[1000005];
int freq[2000010];
int N;

void solve() {
    cin >> N;
    for(int i=0;i<N;i++) {
        int k;
        cin >> k;
        freq[k+1000000]++;
    }
    for(int i=0;i<=2000000;i++) {
        while(freq[i]--) {
            cout << i-1000000 << '\n';
        }
    }
}

int main() {
    fastIO;
    solve();
}