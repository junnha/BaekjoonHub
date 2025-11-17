#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    stack<int> S;

    for(int i=0;i<N;i++) {
        int x;
        cin >> x;
        if(x==0) {
            S.pop();
        } else {
            S.push(x);
        }
    }
    int sum = 0;
        
    while (!S.empty()) {
        sum += S.top();
        S.pop();
        }
cout << sum << '\n';
}