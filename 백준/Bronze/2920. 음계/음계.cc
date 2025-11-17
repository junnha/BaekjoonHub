#include <iostream>

int main() {
    int arr[8];
    for(int i=0;i<8;i++) {
        std::cin >> arr[i];
    }

    int cmp[8] = {1,2,3,4,5,6,7,8};
    int cmp1[8] = {8,7,6,5,4,3,2,1};

    bool is_asc = true;
    bool is_desc = true;
    
    for(int i=0; i<8; i++) {
        if(arr[i] != cmp[i]) {
            is_asc = false;
        }
    }
    for(int i=0; i<8; i++) {
        if(arr[i] != cmp1[i]) {
            is_desc = false;
        }
    }
    
    if(is_asc) {
        std::cout << "ascending";
    } else if(is_desc) {
        std::cout << "descending";
    } else {
        std::cout << "mixed";
    }
}