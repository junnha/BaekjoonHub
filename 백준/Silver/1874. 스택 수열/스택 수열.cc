#include<bits/stdc++.h>
using namespace std;

stack<int> S;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N), result;
    stack<int> s;
    int cur = 1;
     
    vector<int> a;

    for (int i = 0; i < N; ++i) {
    cin >> arr[i];
    }

    for (int i = 0; i < N; ++i) {
    int target = arr[i];

    while (cur <= target) {
        s.push(cur++);
        result.push_back('+');
        }

        if (s.top() == target) {
            s.pop();
            result.push_back('-');
        } else {
            cout << "NO\n";
            return 0;
        }
    }
    for (char c : result) {
        cout << c << '\n';
    }
}