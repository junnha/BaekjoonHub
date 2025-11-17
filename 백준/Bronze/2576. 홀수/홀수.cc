#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    int oddsum = 0;
    int min = 100;

    for(int i=0;i<7;i++) {
        cin >> n;
    if(n%2==1) {
        oddsum += n;
        if(n<min) min = n;
        }
    }
    if (oddsum==0) {cout << "-1";
        return 0;
    } else cout << oddsum << " " << min;

    return 0;
}