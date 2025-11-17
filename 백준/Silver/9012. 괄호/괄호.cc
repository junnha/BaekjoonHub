#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

    int N;
    string str;

    cin >> N;
    cin.ignore();
    for(int i=0;i<N;i++) {
        stack<char> s;
        getline(cin,str);
        for(auto c:str) {
            if(c == '(') {
                if(s.empty() || s.top() == '(') {
                    s.push(c);
                }
            } else if(c==')') {
                if(!s.empty() && s.top() == '(') {
                    s.pop();
                } else {
                    s.push(c);
                }
            }
        }
        if(s.empty()) {
            cout << "YES\n";
        } else cout << "NO\n";
    }
}