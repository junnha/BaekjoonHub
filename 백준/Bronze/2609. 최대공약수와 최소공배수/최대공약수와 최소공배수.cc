#include <iostream>

int main() {
    int x,y;
    std::cin >> x >> y;
    int a,b;
    if(x>=y) {
        a=x;
        b=y;
    } else {
        b=x;
        a=y;
    }

    while(b!=0) {
        int r;
        r = a % b;
        a = b;
        b = r;
    }
    int max = (x*y)/a;
    std::cout << a << '\n' << max;
}