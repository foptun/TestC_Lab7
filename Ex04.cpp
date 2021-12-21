#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    
    printf("\n===== Show Type 1 =====\n");
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n===== Show Type 2 =====\n");
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == (n-1)) {
                printf("*");
            }else {
                if (j % 2 != 0) {
                    printf(" ");
                }else {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    
    printf("\n===== Show Type 3 =====\n");
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j <= n; j++) {
            if (j <= i) {
                printf("*");
            }
        }
        printf("\n");
    }
    
    printf("\n===== Show Type 4 =====\n");
    for (int i = 0; i < n ; i++) {
        for (int j = (n-1); j >= 0; j--) {
            if (j > i) {
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    
    
    return 0;
}
