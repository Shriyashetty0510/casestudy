#include <stdio.h>
#include <stdlib.h>

void displayMenu();
void getCustomerDetails(char *name, char *email,char *address);

int main() {
    char *groceryItems[5] = {"Apple", "Banana", "Orange","potato","carrot"};
    float prices[5] = {1.00, 0.50, 0.75,1.25,0.89};
    int choice;
    int quantity;
    float total = 0.0;
    char name[50];
    char email[100];
    char address[100];

    printf("Welcome to our grocery store!\n\n");
    displayMenu();

    printf("\nEnter your choice (1-%d): ", 5);
    scanf("%d", &choice);
    printf("Enter quantity: ",5);
    scanf("%d",&quantity);

    if (choice >= 1 && choice <= 5) {
        total += prices[choice-1];
        total=total*quantity;
        printf("Added %s to your cart.\n", groceryItems[choice - 1]);
    } else {
        printf("Invalid choice. Please try again.\n");
        return 1;
    }

    getCustomerDetails(name, email,address);

    printf("\n\n--------- Order Summary ---------\n");
    printf("Customer Name: %s\n", name);
    printf("Customer Email: %s\n", email);
    printf("Customer address:%s\n",address);
    printf("Total: $%.2f\n", total);

    return 0;
}


