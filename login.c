#include <stdio.h>
#include <string.h>

struct applicant {
    char name[50];
    char gender[10];
    char address[100];
};

void account() {
    char LoginId[100];
    char Password[100];
    char NewLoginId[100];
    char NewPassword[100];

    // Prompt the user to create a new account
    printf("Welcome to the Login_System\n");
    printf("Create a new account:\n");
    printf("Please Enter a new LoginID: ");
    fgets(NewLoginId, 100, stdin);
    NewLoginId[strcspn(NewLoginId, "\n")] = 0; // remove newline character

    printf("Please Enter a new Password: ");
    fgets(NewPassword, 100, stdin);
    NewPassword[strcspn(NewPassword, "\n")] = 0; // remove newline character

    // Log in with the created account
    printf("\nLog in to your account:\n");
    while (1) {
        printf("Please Enter your LoginID: ");
        fgets(LoginId, 100, stdin);
        LoginId[strcspn(LoginId, "\n")] = 0; // remove newline character

        printf("Please Enter your Password: ");
        fgets(Password, 100, stdin);
        Password[strcspn(Password, "\n")] = 0; // remove newline character

        if (strcmp(Password, NewPassword) == 0 && strcmp(LoginId, NewLoginId) == 0) {
            printf("Hey, you are welcome!\n");
            break;
        } else {
            printf("Wrong password, try again!\n");
        }
    }
}
void main(){
account();
}


