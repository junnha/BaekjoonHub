#include <iostream>
#include <algorithm>

int main() {
    int arr[20];
    for (int i = 0; i < 20; i++) {
    arr[i] = i + 1;
        }

    for (int t = 0; t < 10; t++) {
        int x, y;
        std::cin >> x >> y;
        int l = x - 1, r = y - 1;
        while (l < r) std::swap(arr[l++], arr[r--]);
    }
    for (int i = 0; i < 20; i++) {
        std::cout << arr[i] << ' ';
        }
}