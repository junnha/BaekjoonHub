#include <iostream>
#include <string>

const int MX = 1000005;
int dat[MX];
int pos = 0;

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore();

    for (int i = 0; i < N; i++) {
        std::string s;
        std::cin >> s;

        if(s == "push") {
            int x;
            std::cin >> x;
            dat[pos++]=x;
        } else if(s == "pop") {
            if(pos==0) {
                std::cout << -1 << '\n';
            } else {
                std::cout << dat[pos-1] << '\n';
                pos--;
            }
        } else if(s == "size") {
            std::cout << pos << '\n';
        } else if(s == "empty") {
            if(pos == 0) {
                std::cout << 1 << '\n';
            } else
                std::cout << 0 << '\n';
        } else if(s == "top") {
            if(pos==0) {
                std::cout << -1 << '\n';
            } else {
                std::cout << dat[pos-1] << '\n';
            }
        }
    }
}