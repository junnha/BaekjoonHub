#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
    stack<char> S;
    string str;
    long long cnt=0;
    string s;
    cin >> s;
    int t = s.length();

    for(int i=0;i<t;i++) {
        if(s[i]=='(') {
            S.push(s[i]);
        } else if(s[i-1]=='(') {
                S.pop();
                cnt+=S.size();
        } else {
            S.pop();
            cnt++;
            }
        }
        cout << cnt;
    }