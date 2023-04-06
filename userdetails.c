#include <stdio.h>
struct applicant {
    char name[50];
    int year, month, date;
    char gender[20];
    char address[50];
};
void main() {
    printf("PERSONAL DETAILS");

    printf("\n\n\n\nPlease fill in your personal details below");

    FILE *fp;
    struct applicant user1;
    fp = fopen("applicant_details.txt", "ab");

    printf("\n\n\n\n\nName: ");
    fgets(user1.name,50,stdin);

    printf("\n\nGender: ");
    scanf("%s", &user1.gender);

    printf("\n\nAddress: ");
    scanf("%s", &user1.address);


}
