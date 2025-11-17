#include <stdio.h>

int main() {
    int n, sum = 0;
    char nums[101];  

    scanf("%d", &n);
    scanf("%s", nums);

    for (int i = 0; i < n; i++) {
        sum += nums[i] - '0';
    }

    printf("%d\n", sum);
    return 0;
}