#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        long long x, y;
        cin >> x >> y;

        int a = (int)(x % 10);
        int b = (int)(y % 4);
        if (b == 0) b = 4;

        int val = 1;
        for (int i=0;i<b;i++) val=(val*a)%10;

        if (val == 0) val = 10;
        cout << val << "\n";
    }
}