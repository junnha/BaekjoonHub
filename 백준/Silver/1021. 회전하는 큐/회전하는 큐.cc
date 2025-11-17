#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,M;
    int cnt=0;
    cin >> N >> M;
    
    for(int i=0;i<N;i++) {
        dq.push_back(i+1);
    }

    for(int j=0;j<M;j++) {
        int K;
        cin >> K;
        int T;

        for(int t=0;t<dq.size();t++) {
            if(dq[t] == K) {
                T = t;
                break;
            }
        }
        while(dq.front()!=K) {
        if(T < (dq.size()-T)) {
            int front = dq[0];
            dq.pop_front();
            dq.push_back(front);
            cnt++;
        } else if (T >= (dq.size()-T)){
            int back = dq[dq.size()-1];
            dq.pop_back();
            dq.push_front(back);
            cnt++;
            }
        }
        dq.pop_front();
    }
    cout << cnt;
}
