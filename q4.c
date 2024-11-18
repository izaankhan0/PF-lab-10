#include <stdio.h>
#include <string.h>

struct TravelPackage {
    char packageName[50];
    char destination[50];
    int duration;
    int cost;
    int seatsAvailable;
};

void displayPackages(struct TravelPackage packages[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Package %d:\n", i + 1);
        printf("Name: %s\n", packages[i].packageName);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: PKR %d Lakh\n", packages[i].cost);
        printf("Seats Available: %d\n\n", packages[i].seatsAvailable);
    }
}

void bookPackage(struct TravelPackage packages[], int n) {
    int choice;
    printf("Enter the package number to book (1 to %d): ", n);
    scanf("%d", &choice);

    if (choice < 1 || choice > n) {
        printf("Invalid package number. Please try again.\n");
        return;
    }

    if (packages[choice - 1].seatsAvailable > 0) {
        packages[choice - 1].seatsAvailable--;
        printf("Booking successful for package: %s\n", packages[choice - 1].packageName);
    } else {
        printf("No seats available for the selected package.\n");
    }
}

int main() {
    struct TravelPackage packages[3] = {
        {"Pakistan Paratha", "Murree", 5, 1200, 10},
        {"Pak tour", "Nathia", 7, 1500, 5},
        {"Dakaiti", "Karachi", 3, 800, 8}
    };

    int option;
    printf("\n1. Display Packages\n2. Book a Package\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            displayPackages(packages, 3);
            break;
        case 2:
            bookPackage(packages, 3);
            break;

    	return 0;
	}
}