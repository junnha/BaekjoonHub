#include <bits/stdc++.h>
using namespace std;

    int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[1000000];
    int ans[1000000];

    int N;
    cin >> N;
    stack<int> s;
    vector<int> v;
    
    for(int i=0;i<N;i++) {
        cin >> a[i];
    }
        
        for (int i = N-1; i >=0; i--) {
            while (!s.empty() && s.top() <= a[i]) {
                s.pop();
            } if(s.empty()) {
            ans[i] = -1;
            } else ans[i] = s.top();
            s.push(a[i]);
        }   

    for (int i = 0; i < N; i++) {
        cout << ans[i] << ' ';
    } 
}