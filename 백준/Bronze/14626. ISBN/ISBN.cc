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
    string s;
    cin >> s;

    int star = 0;

    for(int i=0;i<13;i++) {
        if (s[i] == '*') {
            star = i;
        }
    }
    int sum = 0;

    for(int i =0;i<13;i++) {
        if (s[i] == '*') continue;

        int v = s[i] - '0';
        if (i % 2 == 0) sum += v;
        else sum += v * 3;
    }
    for(int t=0;t<=9;t++) {
        int final_sum = sum + ((star%2==0) ? t : t*3);
        if(final_sum%10==0) {
            cout << t;
            return;
        }
    }
}

int main() {
    fastIO;
    solve();
}