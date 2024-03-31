void displayMenu() {
    printf("Here is our menu:\n");
    printf("1. Apple - $1.00\n");
    printf("2. Banana - $0.50\n");
    printf("3. Orange - $0.75\n");
    printf("4. Potato - $1.25\n");
    printf("5. Carrot - $0.89\n");
}


void getCustomerDetails(char *name, char *email,char *address) {
    printf("\nEnter your name: ");
    scanf("%s", name);
    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your address: ");
    scanf("%s", address);

}