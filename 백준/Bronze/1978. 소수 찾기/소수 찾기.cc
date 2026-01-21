#include <iostream>
using namespace std;

bool is_prime(int x) {
    if (x < 2) {
        return false;
    }
    for(int i=2;i*i<=x;i++) {
        if (x%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int k[100];
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if(is_prime(k[i])) {
            cnt++;
        }
    }
    cout << cnt << '\n';
}