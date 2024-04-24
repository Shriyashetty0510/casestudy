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

    

// Function to display the menu
void displayMenu() {
    printf("Menu:\n");
    printf("1. Apple - $1.00\n");
    printf("2. Banana - $0.50\n");
    printf("3. Orange - $0.75\n");
    printf("4. Potato - $1.25\n");
    printf("5. Carrot - $0.89\n");
}

