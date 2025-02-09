#include <stdio.h>

int main() {
    int stock[] = {10, 50, 30, 15, 25};
    int total = 0;
    int numProducts = sizeof(stock) / sizeof(stock[0]);
    
    // Display Stock Quantities
    printf("Stock Quantities:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("Product %d: %d\n", i + 1, stock[i]);
    }
    
    // Total Stock Calculation
    for (int i = 0; i < numProducts; i++) {
        total += stock[i];
    }
    
    // Average Stock
    float average = (float)total / numProducts;
    
    printf("Total Stock: %d\n", total);
    printf("Average Stock: %.2f\n", average);
    
    return 0;
}

