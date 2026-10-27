#include <stdio.h>

int main() {
    float balance, amount;
    int choice;

    // Read current account balance
    printf("Enter current account balance:5000");
    scanf("%f", &balance);

    // Read customer's choice
    printf("\n--- ATM Menu ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // 1 for balance inquiry: displays current balance
            printf("Current Balance: %.2f\n", balance);
            break;

        case 2:
            // 2 for cash withdrawal
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= balance) {
                balance -= amount;
                printf("Transaction successful\n");
                printf("Remaining balance: %.2f\n", balance);
            } else {
                printf("Insufficient balance\n");
            }
            break;

        case 3:
            // 3 for cash deposit
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            balance += amount;
            printf("Deposit successful\n");
            printf("Updated balance: %.2f\n", balance);
            break;

        default:
            // Any other choice displays "Invalid option"
            printf("Invalid option\n");
            break;
    }

    return 0;
}