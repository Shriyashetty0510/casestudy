#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for grocery items
typedef struct {
    char name[50];
    float price;
} GroceryItem;
typedef struct {
    char name[50];
    char email[100];
    char address[100];
} CustomerDetails;
getCustomerDetails(customer);

    printf("\n\n--------- Order Summary ---------\n");
    printf("Customer Name: %s\n", customer->name);
    printf("Customer Email: %s\n", customer->email);
    printf("Customer Address: %s\n", customer->address);
    printf("Total: $%.2f\n", total);

    free(groceryItems);
    free(customer);
    return 0;
}
void getCustomerDetails(CustomerDetails *customer) {
    printf("\nEnter your name: ");
    scanf("%s", customer->name);
    printf("Enter your email: ");
    scanf("%s", customer->email);
    printf("Enter your address: ");
    scanf("%s", customer->address);
}