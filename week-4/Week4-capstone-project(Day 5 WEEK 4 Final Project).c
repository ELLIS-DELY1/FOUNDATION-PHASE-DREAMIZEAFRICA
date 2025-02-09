Train Booking System
Features:
Set up a simple menu in main() using a switch statement with options:

View available trains
Book tickets
Cancel tickets (Placeholder message)
Search by destination
Exit
If a user selects an option, display a corresponding message or invoke a function.

Define an array of structures to store train information, including:

Train number
Destination
Available seats
Ticket price (in RWF)
Use the following train data:

yaml
Copy
Edit
Train No: 101, Destination: Kigali, Available Seats: 30, Price: 5000 RWF
Train No: 102, Destination: Musanze, Available Seats: 25, Price: 4500 RWF
Train No: 103, Destination: Rubavu, Available Seats: 15, Price: 3500 RWF
Train No: 104, Destination: Nyundo, Available Seats: 20, Price: 4000 RWF
Train No: 105, Destination: Huye, Available Seats: 10, Price: 3000 RWF
Implement a function viewAvailableTrains() to display all train details.

Implement a function bookTickets() to:

Prompt the user for a train number and number of seats to book.
Check if enough seats are available.
Update the available seats accordingly.
Implement a function searchTrains() to:

Accept a destination as input.
Display all matching trains.
Integrate all functions into the menu system to allow user interaction.(CPROGRAMMING) 




#include <stdio.h>
#include <string.h>

#define MAX_TRAINS 5

typedef struct {
    int train_no;
    char destination[50];
    int available_seats;
    int ticket_price;
} Train;

Train trains[MAX_TRAINS] = {
    {101, "Kigali", 30, 5000},
    {102, "Musanze", 25, 4500},
    {103, "Rubavu", 15, 3500},
    {104, "Nyundo", 20, 4000},
    {105, "Huye", 10, 3000}
};

void viewAvailableTrains() {
    printf("Available Trains:\n");
    for (int i = 0; i < MAX_TRAINS; i++) {
        printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n",
               trains[i].train_no, trains[i].destination, trains[i].available_seats, trains[i].ticket_price);
    }
}

void bookTickets() {
    int train_no, seats_to_book;
    printf("Enter train number: ");
    scanf("%d", &train_no);
    printf("Enter number of seats to book: ");
    scanf("%d", &seats_to_book);

    for (int i = 0; i < MAX_TRAINS; i++) {
        if (trains[i].train_no == train_no) {
            if (trains[i].available_seats >= seats_to_book) {
                trains[i].available_seats -= seats_to_book;
                printf("Successfully booked %d seats on train %d.\n", seats_to_book, train_no);
                return;
            } else {
                printf("Not enough available seats.\n");
                return;
            }
        }
    }
    printf("Train not found.\n");
}

void searchTrains() {
    char destination[50];
    printf("Enter destination: ");
    scanf("%s", destination);

    printf("Trains to %s:\n", destination);
    int found = 0;
    for (int i = 0; i < MAX_TRAINS; i++) {
        if (strcmp(trains[i].destination, destination) == 0) {
            printf("Train No: %d, Available Seats: %d, Price: %d RWF\n",
                   trains[i].train_no, trains[i].available_seats, trains[i].ticket_price);
            found = 1;
        }
    }
    if (!found) {
        printf("No trains found to %s.\n", destination);
    }
}

int main() {
    int choice;
    do {
        printf("\nTrain Booking System\n");
        printf("1. View available trains\n");
        printf("2. Book tickets\n");
        printf("3. Cancel tickets (Placeholder message)\n");
        printf("4. Search by destination\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                viewAvailableTrains();
                break;
            case 2:
                bookTickets();
                break;
            case 3:
                printf("Cancel tickets feature is not implemented yet.\n");
                break;
            case 4:
                searchTrains();
                break;
            case 5:
                printf("Exiting the system.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
