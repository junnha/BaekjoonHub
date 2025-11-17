#include <iostream>

int main() {
    int n;
    int arr[20];
    int sumy = 0;
    int summ = 0;
    std::cin >> n;
    for(int i=0;i<n;i++) {
        std::cin >> arr[i];
        sumy += ((arr[i] / 30)+1) * 10;
        summ += ((arr[i] / 60)+1) * 15;
        
    }
    if(sumy<summ) {
        std::cout << "Y" << " " << sumy;
    } else if (sumy>summ) {
        std::cout << "M" << " " << summ;
        } else if (sumy==summ) {
             std::cout << "Y" << " " << "M" << " " << summ;
        }
}
