#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i=0; i<T; i++) {
        int H, W, N;
        cin >> H >> W >> N;
        int floor, room;
        if(N % H == 0) {
            floor = H;
            room = N / H;
        } else {
            floor = N % H;
            room = N / H + 1;
        }
        
        if(room < 10) cout << floor << 0 << room << '\n';
        else cout << floor << room << '\n';
    }
}