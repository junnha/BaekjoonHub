#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int room = 1, layer = 1;
    while (n > room) {
        room += 6 * layer;
        layer++;
    }
    cout << layer;
}