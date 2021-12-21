#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int sum = 0;
    
    for (int i = 1; i <= 10 ; i++) {
        
        int x = 0;
        printf("Integer (%d): ", i);
        scanf("%d", &x);
        
        sum = sum + x;
    }
    
    float av = ((float)sum / 10);
    
    printf("The sum of these integers is: %d\n", sum);
    printf("The average of these integers is: %.2f", av);
    
   
    return 0;
}
