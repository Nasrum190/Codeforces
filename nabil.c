#include <stdio.h>
#include <stdlib.h>

struct Ticket {
    int ticketNumber;
    char passengerName[50];
    int age;
};

int main() {
    int numTickets;

    printf("Welcome to the Train Ticket Booking System\n");
    printf("How many tickets would you like to book? ");
    scanf("%d", &numTickets);

    if (numTickets <= 0) {
        printf("Invalid number of tickets.\n");
        return 1;
    }

    struct Ticket tickets[numTickets];

    for (int i = 0; i < numTickets; i++) {
        printf("\nTicket %d:\n", i + 1);
        tickets[i].ticketNumber = i + 1;
        printf("Enter passenger name: ");
        scanf("%s", tickets[i].passengerName);
        printf("Enter passenger age: ");
        scanf("%d", &tickets[i].age);
    }

    printf("\nBooked Tickets:\n");
    printf("Ticket Number\tPassenger Name\tAge\n");
    for (int i = 0; i < numTickets; i++) {
        printf("%d\t\t%s\t\t%d\n", tickets[i].ticketNumber, tickets[i].passengerName, tickets[i].age);
    }

    return 0;
}
