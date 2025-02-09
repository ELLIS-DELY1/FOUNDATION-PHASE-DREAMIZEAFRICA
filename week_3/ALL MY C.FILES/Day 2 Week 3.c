#include <stdio.h>

void displayMenu() {
    printf("MTN Mobile Services Menu:\n");
    printf("1. Airtime Recharge\n");
    printf("2. Internet Bundle\n");
    printf("3. Mobile Money Transfer\n");
    printf("4. Check Balance\n");
    printf("Please choose an option (1-4): ");
}

int main() {
    int choice;
    float amount;
    char recipient[50];
    float balance = 1000.00; // Mock balance

    displayMenu();
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter amount for airtime recharge: ");
            scanf("%f", &amount);
            printf("Airtime recharge of %.2f successful.\n", amount);
            break;
        case 2:
            printf("Enter amount for internet bundle: ");
            scanf("%f", &amount);
            if (amount >= 500) {
                printf("Internet bundle of %.2f successful.\n", amount);
            } else {
                printf("Invalid amount. Minimum is 500.\n");
            }
            break;
        case 3:
            printf("Enter recipient's name: ");
            scanf("%s", recipient);
            printf("Enter amount to transfer: ");
            scanf("%f", &amount);
            printf("Mobile money transfer of %.2f to %s successful.\n", amount, recipient);
            break;
        case 4:
            printf("Your current balance is: %.2f\n", balance);
            break;
        default:
            printf("Invalid option. Please try again.\n");
            break;
    }

    return 0;
}
