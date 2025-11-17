#include<iostream>

int main() {
    int N;
    std::cin >> N;
    int arr[6];

    for(int i=0;i<6;i++) {
        std::cin >> arr[i];
    }
    int T,P;
    std::cin >> T >> P;

    int cnt=0;
    for(int j=0;j<6;j++) {
        if((arr[j]%T)==0){
            cnt+=(arr[j]/T);
        } else cnt+=(arr[j]/T)+1;

    }

    int cnt2;
    cnt2=N/P;
    int cnt3;
    cnt3=N%P;

    std::cout<< cnt << '\n' << cnt2 << " " << cnt3;
}