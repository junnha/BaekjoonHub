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
    int cnt=0;

    int N;
    cin >> N;

    for(int i=0;i<N;i++) {
        string str;
        cin >> str;
        stack<char> s;

        for(int j=0;j<str.size();j++) {
            char a = str[j];
            if (!s.empty() && s.top() == a) {
                s.pop();
            } else {
                s.push(a);
            }
        }
        if(s.empty()) cnt++;
    }
    cout << cnt;
}
int main() {
    fastIO;
    solve();
}