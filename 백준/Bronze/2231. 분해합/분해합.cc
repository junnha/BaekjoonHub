#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int answer = 0;

    for (int M = 1; M <= N; M++) {
        int sum = M;
        int temp = M;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == N) {
            answer = M;
            break;
        }
    }

    cout << answer;
}