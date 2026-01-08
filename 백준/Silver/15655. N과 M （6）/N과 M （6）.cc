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

int N,M;
int arr[10];
int num[10];
bool isused[10];

void func(int k) {
    if(k == M) {
        for(int i=0;i<M;i++) {
        cout << num[arr[i]] << ' ';
        }
        cout << '\n';
        return;
    }
    int start = 1;
    if(k != 0) {
        start = arr[k-1];
    }
    for(int i=start;i<=N;i++) {
        if(!isused[i]) {
            isused[i]=1;
            arr[k]=i;
            func(k+1);
            isused[i]=0;
        }
    }
}

void solve() {
    cin >> N >> M;
    for(int i=1;i<=N;i++) {
        cin >> num[i];
    }

    sort(num,num+N+1);
    func(0);
}

int main() {
    fastIO;
    solve();
}