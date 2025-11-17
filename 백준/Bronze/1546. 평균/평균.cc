#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int N;
    int max=0;
    double arr[1000];
    cin >> N;

    for(int i=0;i<N;i++) {
        int K;
        cin >> K;
        arr[i] = K;
        if (K > max) {
        max = K;
        }
    }
    for(int j=0;j<N;j++) {
            arr[j]=arr[j]/max*100;
    }
    double avg=0;
    for(int t=0;t<N;t++) {
        avg+=arr[t];
    }
    avg = avg/N;
    if (avg == (int)avg)
        printf("%.1f\n", avg);
    else
        printf("%.6f\n", avg);
}