#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x = 0;
    
    printf("Enter Number: ");
    scanf("%d", &x);
    
    while (x < 2 || x > 25) {
        printf("Enter Number: ");
        scanf("%d", &x);
    }
    
    printf("\n=== Output ===\n");
    for (int i = 1; i <= 12 ; i++) {
        int sum = x * i;
        printf("%d x %d = %d\n", x, i, sum);
    }
    
    return 0;
}
