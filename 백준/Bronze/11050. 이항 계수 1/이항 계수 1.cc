#include <iostream>

int main() {
    int x,y;
    std::cin >> x >> y;
    int n=x-y;

    long long factorialx = 1;
    long long factorialy = 1;
    long long factorialn = 1;

    for(int i = 1; i<=x; i++) {
        factorialx = factorialx * i;
    }

    for(int i = 1; i<=y; i++) {
        factorialy = factorialy * i;
    }

    for(int i = 1; i<=n; i++) {
        factorialn = factorialn * i;
    }

    int ans = factorialx / (factorialn*factorialy);

    std::cout << ans;
}