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
    int M;
    int arr[20];
    cin >> M;
    for(int i=0;i<M;i++) {
        string s;
        int x;
        cin >> s;
        if(s == "add") {
            cin >> x;
            arr[x-1] = 1;
        } else if(s == "remove") {
            cin >> x;
            arr[x-1] = 0;
        } else if(s == "check") {
            cin >> x;
            if (arr[x-1] == 1) {
                cout << 1 << '\n';
            } else cout << 0 << '\n';
        } else if(s == "toggle") {
            cin >> x;
            if(arr[x-1] == 1) {
                arr[x-1] = 0;
            } else arr[x-1] = 1;
        } else if(s == "all") {
            for(int i=0;i<20;i++) {
                arr[i]=1;
            }
        } else if(s == "empty") {
            for(int i=0;i<20;i++) {
                arr[i]=0;
            }
        }
    }
}

int main() {
    fastIO;
    solve();
}