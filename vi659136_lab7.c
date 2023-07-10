// Vincent Phillips
#include <stdio.h>

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count[n];

    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d", count[i]);
    }

    return 0;
}