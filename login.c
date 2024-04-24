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