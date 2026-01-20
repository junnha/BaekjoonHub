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

int num[6];
int arr[20];

void func(int k,int start,int n) {
    if(k==6) {
        for(int i=0;i<6;i++) {
            cout << num[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=start;i<n;i++) {
        num[k]=arr[i];
        func(k+1,i+1,n);
    }
}

void solve() {
    while(1) {
        int N;
        cin >> N;
        if(N==0) break;
        for(int i=0;i<N;i++) {
            cin >> arr[i];
        }
        func(0,0,N);
        cout << '\n';
    }
}

int main() {
    fastIO;
    solve();
}