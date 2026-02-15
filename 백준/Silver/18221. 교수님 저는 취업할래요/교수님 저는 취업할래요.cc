#include <iostream>
#include<string>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include <algorithm>
#include <cmath> 
#include<utility>
#include<map>
using namespace std;
int s[1002][1002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int d = 0;
    int A1, B1, A2, B2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
            if (s[i][j] == 2){
                A1 = i;
                B1 = j;
            }
            if (s[i][j] == 5) {
                A2 = i;
                B2 = j;
            }
        } 
    }

    int A = (A1 - A2);
    int B = (B1 - B2);
    
    int a1 = min(A1, A2);
    int a2 = max(A1, A2);
    int b1 = min(B1, B2);
    int b2 = max(B1, B2);

    d = A*A + B*B;

    int cnt = 0;

    for (int i = a1; i <= a2; i++) {
        for (int j = b1; j <= b2; j++) {
            if (s[i][j] == 1) cnt++;
            }
        }
    if(cnt >=3 && d>=25) {
        cout << 1;
    } else cout << 0;
}