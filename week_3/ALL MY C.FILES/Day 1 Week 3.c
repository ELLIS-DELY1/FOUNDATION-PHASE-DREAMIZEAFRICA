#include <stdio.h>

// Function to greet the user
void greetUser(char name[]) {
    printf("Hello, %s! Welcome to Dreamizer's Programming Class!\n", name);
}

// Function to return a thank-you message
const char* thankUser() {
    return "Thank you for practicing coding today!";
}

int main() {
    char name[50];  // Array to store the user's name

    // Prompt the user for their name
    printf("Enter your name: ");
    scanf("%49s", name);  // Read user input 

    // Call the greetUser function
    greetUser(name);

    // Call the thankUser function and print the returned message
    printf("%s\n", thankUser());

    return 0;
}
