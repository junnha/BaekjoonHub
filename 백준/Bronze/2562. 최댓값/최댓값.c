#include <stdio.h>

int main() {
    int arr[101];
    int max = -100000;
    int index;

    for (int i = 0; i < 9; i++) {
        scanf("%d",&arr[i]);
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    printf("%d\n%d", max, index+1);
    return 0;
}