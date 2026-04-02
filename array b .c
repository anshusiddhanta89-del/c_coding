#include <stdio.h>

int main() {
    int a[] = {2, 3, 1, 8};
    int n = 4;
    printf("Power Set:\n");
    printf("{ }\n");
    for(int i = 0; i < n; i++) {
        printf("{ %d }\n", a[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            printf("{ %d %d }\n", a[i], a[j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                printf("{ %d %d %d }\n", a[i], a[j], a[k]);
            }
        }
    }
    printf("{ %d %d %d %d }\n", a[0], a[1], a[2], a[3]);
    return 0;
