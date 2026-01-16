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

int N, M;
int arr[10001];
int num[10];

void func(int depth, int start) {
    if (depth == M) {
        for (int i=0;i<M;i++) cout <<  num[i] << ' ';
        cout << '\n';
        return;
    }
    int last = -1;
    for (int i=start;i<N;i++) {
        if (arr[i]==last) continue;
        last = arr[i];
        num[depth] = arr[i];
        func(depth+1,i+1);
    }
}
void solve() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    func(0, 0);
}
int main() {
    fastIO;
    solve();
}