#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 0;
    printf("Enter number of integers in a row (R): ");
    scanf("%d", &r);
    
    if (r == 0) {
        return 0;
    }
    
    int n = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n ; i++) {
        printf("%d ", i);
        if (i % r == 0) {
            printf("\n");
        }
    }
    
    
    return 0;
}
