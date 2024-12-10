#include <stdio.h>

int main() {
    int B1, B2, B3;
    
    // Read the input values B1, B2, and B3
    scanf("%d %d %d", &B1, &B2, &B3);
    
    // Calculate the number of empty bottles
    int empty_bottles = (B1 == 0) + (B2 == 0) + (B3 == 0);
    
    // Check if at least two bottles are empty
    if (empty_bottles >= 2) {
        printf("Water filling time\n");
    } else {
        printf("Not now\n");
    }
    
    return 0;
}
