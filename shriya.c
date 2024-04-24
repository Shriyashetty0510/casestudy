#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for grocery items
typedef struct {
    char name[50];
    float price;
} GroceryItem;

// Structure for customer details
typedef struct {
    char name[50];
    char email[100];
    char address[100];
} CustomerDetails;

// Function prototypes
void displayMenu();
void getCustomerDetails(CustomerDetails *customer);
int login();

int main() {
    GroceryItem *groceryItems = (GroceryItem *)malloc(5 * sizeof(GroceryItem));
    groceryItems[0] = (GroceryItem){"Apple", 1.00};
    groceryItems[1] = (GroceryItem){"Banana", 0.50};
    groceryItems[2] = (GroceryItem){"Orange", 0.75};
    groceryItems[3] = (GroceryItem){"Potato", 1.25};
    groceryItems[4] = (GroceryItem){"Carrot", 0.89};

    int choice;
    int quantity;
    float total = 0.0;
    CustomerDetails *customer = (CustomerDetails *)malloc(sizeof(CustomerDetails));

    if (!login()) {
        printf("Login failed. Exiting program.\n");
        free(groceryItems);
        free(customer);
        return 1;
    }

    printf("Welcome to our grocery store!\n\n");
    displayMenu();

    printf("\nEnter your choice (1-%d): ", 5);
    scanf("%d", &choice);
    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (choice >= 1 && choice <= 5) {
        total += groceryItems[choice - 1].price;
        total *= quantity;
        printf("Added %s to your cart.\n", groceryItems[choice - 1].name);
    } else {
        printf("Invalid choice. Please try again.\n");
        free(groceryItems);
        free(customer);
        return 1;
    }

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

// Function to display the menu
void displayMenu() {
    printf("Menu:\n");
    printf("1. Apple - $1.00\n");
    printf("2. Banana - $0.50\n");
    printf("3. Orange - $0.75\n");
    printf("4. Potato - $1.25\n");
    printf("5. Carrot - $0.89\n");
}

// Function to get customer details
void getCustomerDetails(CustomerDetails *customer) {
    printf("\nEnter your name: ");
    scanf("%s", customer->name);
    printf("Enter your email: ");
    scanf("%s", customer->email);
    printf("Enter your address: ");
    scanf("%s", customer->address);
}

// Function to simulate a login
int login() {
    char username[50];
    char password[50];
    printf("Login Page\n");
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    
    // For simplicity, the login is successful if the username and password are the same
    return strcmp(username, password) == 0;
}