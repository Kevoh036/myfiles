    /* Libraries

#include <curses.h>

*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
    /*This library allows manipulating of strings such as comparing,
copying, concatinating among others*/
#include <string.h>

    /*Welcome Screen. Define program. Offer contact details
for any enquiries that may arise*/

void welcome() {
    printf("\n\t\t\t\t\tTECHNICAL UNIVERSITY OF MOMBASA");


    printf("\n\n\n\n\n\n\n\t\t\t\t\tAPPLICATION SYSTEM");



    printf("\n\n\n\n\n\n\n\n\n\n\nContact Us: ");
    printf("\nTom Mboya Street, Tudor, Mombasa");
    printf("\nP.O. Box 90420 - 80100");
    printf(" \n+254208095365");
    printf("\n+254733955377");
    printf("\ninfo@tum.ac.ke");
}

    /*Create a structure to capture and store details of applicants and allow
functions to call those details when neccessary*/

typedef struct {
    char name[50];
    int year, month, date;
    char gender[8];
    char ntnlty[20];
    char address[50];
    char mean[2];
    char email[50];
    char mobile[15];
    char password[25];
    char nextofkin[50];
    char relation[20];
    char emerg_mobile[15];
    char emerg_address[50];
 }applicants;

    /*User to create an account using email address and password using the structure outlined above.
As we are not using a database, no file will be created to store such information*/

void registration(applicants* user1) {
    printf("\n\n\n\n\n\n\n\t\t\t\t\tREGISTRATION");


    printf("\n\n\n\nWelcome to the application portal.");
    printf("\n\nPlease proceed to registration");

    /*fgetc(stdin) is used  to flush out all hanging \n (new line) from standard input
from being read by fgets which causes skipping as they are interpreted as inputs

    scanf only reads until whitespace or new line is encountered
but fgets allows us to read the spaces*/

    printf("\n\nEmail: ");
    fgetc(stdin);
    fgets(user1->email, 50, stdin);

    printf("Password: ");
    fgetc(stdin);
    fgets(user1->password, 25, stdin);

    printf("\n\nAccount created sucessfully");
}

    /*To complete registration the user will be required to fill their personal details as
outlined. This may help in selection such as using gender to determine availability if quotas
are applicable or charging different rates for applicants from alien nationalities for application or
next of kin details for contact during emergencies*/

void account() {
    printf("\n\n\n\n\n\n\n\t\t\t\t\tACCOUNT");
    printf("\n\nTo complete registration please fill in your personal details below");

    applicants user1;

    printf("\n\nPersonal Details");
    printf("\nName: ");
    fgetc(stdin);
    fgets(user1.name, 50, stdin);

    printf("Mobile Number: ");
    fgetc(stdin);
    fgets(user1.mobile, 15, stdin);

    printf("Date of Birth (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &user1.date, &user1.month, &user1.year);

    printf("Gender: ");
    fgetc(stdin);
    fgets(user1.gender, 8, stdin);

    printf("Nationality: ");
    fgetc(stdin);
    fgets(user1.ntnlty, 20, stdin);;

    printf("Address: ");
    fgetc(stdin);
    fgets(user1.address, 50, stdin);

    printf("\n\nNext of Kin");
     printf("\nName: ");
    fgetc(stdin);
    fgets(user1.nextofkin, 50, stdin);

    printf("Relationship: ");
    fgetc(stdin);
    fgets(user1.relation, 20, stdin);

    printf("Mobile Number: ");
    fgetc(stdin);
    fgets(user1.emerg_mobile, 15, stdin);

    printf("Address: ");
    fgetc(stdin);
    fgets(user1.emerg_address, 50, stdin);
}

    /*After registration, use email and password to log in. As we cannot store email
and password inputs from user we will use test credentials for this function. The
function will be looped infinitely until user provides correct password*/

void login(applicants* user1) {
    printf("\n\n\n\n\n\n\n\t\t\t\t\tLOG IN\n");

    while(1){
        printf("\n\nEmail: ");
        scanf("%s", user1->email);

        printf("Password: ");
        scanf("%s", &user1->password);

        if(strcmp(user1->email, "mail") == 0){
            if(strcmp(user1->password, "pass") == 0){
                printf("\n\nSuccessfully logged in\n");
                break;
            }
        }
        else{
        printf("\n\nEmail or Password is invalid.\nPlease try again.\n");
        }
    }
}

    /*Choose the course to pursue. The courses shold be grouped according to
 the respective faculty*/
void course() {
    int y;
    char *course_title [] = {"Civil Engineering", "Electrical Engineering", "Mechanical Engineering", "Computer Science", "Information Technology", "Commerce", "Management", "Medicine", "Nursing", "Journalism", "Hospitality"};

    printf("\n\n\nWhich course would you like to undertake?");

    printf("\n\nFaculty of Engineering");
    printf("\n1. Civil Engineering");
    printf("\n2. Electrical Engineering");
    printf("\n3. Mechanical Engineering");

    printf("\n\nFaculty of Information Technology");
    printf("\n4. Computer Science");
    printf("\n5. Information Technology");

    printf("\n\nFaculty of Business");
    printf("\n6. Commerce");
    printf("\n7. Management");


    printf("\n\nFaculty of Medicine");
    printf("\n8. Medicine");
    printf("\n9. Nursing");

    printf("\n\nFaculty of Humanities and Social Sciences");
    printf("\n10. Journalism");
    printf("\n11. Hospitality");

    while(y) {
        printf("\n\nSelect course: ");
        scanf("%d", &y);

        switch(y) {
        case 1:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        case 2:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        case 3:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        case 4:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        case 5:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        case 6:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        case 7:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        case 8:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        case 9:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        case 10:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        case 11:
            printf("\nYou chosen to pursue ");
            printf("%s", course_title [y-1]);
            break;

        default:
            printf("\nPlease choose among the options listed.");
            continue;
        }
    break;
    }
}

    /*Select program to pursue. Each program should have different academic requirements
and if possible suggest  lower level of program if academic qualifications not met*/

void program() {
    int z;
    char *course_program [] = {"Certificate", "Diploma", "Degree", "Masters", "Doctorate"};

    printf("\n\n\nWhat programme would you like to apply for?");
    printf("\n1. Certificate");
    printf("\n2. Diploma");
    printf("\n3. Degree");
    printf("\n4. Masters");
    printf("\n5. Doctorate");

    while(z) {
        printf("\n\nEnter selected programme: ");
        scanf("%d", &z);

        switch(z) {
        case 1:
            printf("\nYou chosen to pursue a ");
            printf("%s", course_program [z-1]);
            break;

        case 2:
            printf("\nYou chosen to pursue a ");
            printf("%s", course_program [z-1]);
            break;

        case 3:
            printf("\nYou chosen to pursue a ");
            printf("%s", course_program [z-1]);
            break;

        case 4:
            printf("\nYou chosen to pursue a ");
            printf("%s", course_program [z-1]);
            break;

        case 5:
            printf("\nYou chosen to pursue a ");
            printf("%s", course_program [z-1]);
            break;

        default:
            printf("\nYou selected an invalid option. Try Again");
            continue;
        }
    break;
    }
}

    /*This functions allows applicant to input their academic qualifications and check whether they qualify. Separate programs
and course should have unique academic requirements but for now all are capped to a minumum of  grade C.*/
void academic(applicants* user1) {
        printf("\n\t\t\t\t\tACADEMIC QUALIFICATIONS");

	printf("\n\n\nPlease enter your KCSE results.");
	printf("\nMean Grade: ");
        fgetc(stdin);
        fgets(user1->mean, 2, stdin);

        if(strcmp(user1->mean, "A") == 0) {
            printf("\nYou qualify for the selected course");
        }

        else if(strcmp(user1->mean, "A-") == 0) {
            printf("\nYou qualify for the selected course");
        }

        else if(strcmp(user1->mean, "B+") == 0) {
            printf("\nYou qualify for the selected course");
        }

        else if(strcmp(user1->mean, "B") == 0) {
            printf("\nYou qualify for the selected course");
        }

        else if(strcmp(user1->mean, "B-") == 0) {
            printf("\nYou qualify for the selected course");
        }

        else if(strcmp(user1->mean, "C+-") == 0) {
            printf("\nYou qualify for the selected course");
        }

        else if(strcmp(user1->mean, "C") == 0) {
            printf("\nYou qualify for the selected course");
        }

        else {
            printf("\nYou do not qualify for the selected course");
            printf("\nPlease select a different program.");
        }


}

    /*If academic requirements are met, applicant should choose which intake they will be joining. Different courses should
have different intakes. This allows program to check for availability when connected to a database.*/
void intake() {
    int x;
    char *course_intake [] = {"September", "May"};

    printf("\n\n\nWhich intake are you applying for?");
    printf("\n1. September");
    printf("\n2. May");

    while(x) {
        printf("\n\nChoose intake: ");
        scanf("%d", &x);

        switch(x) {
        case 1:
            printf("\nThe course will begin in ");
            printf("%s", course_intake [x-1]);
            break;

        case 2:
            printf("\nThe course will begin in ");
            printf("%s", course_intake [x-1]);
            break;

        default:
            printf("\nPlease try again.");
            continue;
        }
    break;
    }
}

    /*Applicant should then choose how the course they have selected will be undertaken. This allows for flexibility
for different programs such as postgraduate.*/
void mode() {
    int w;
    char *course_mode [] = {"Full-time", "Part-time", "Online"};

    printf("\n\n\nHow will you be attending this programme?");
    printf("\n1. Full-time ");
    printf("\n2. Part-time");
    printf("\n3. Online");

    while(w) {
        printf("\n\nChoose mode: ");
        scanf("%d", &w);

        switch(w) {
        case 1:
            printf("\nThe course will be attended ");
            printf("%s", course_mode [w-1]);
            break;

        case 2:
            printf("\nThe course will be attended ");
            printf("%s", course_mode [w-1]);
            break;

        case 3:
            printf("\nThe course will be attended ");
            printf("%s", course_mode [w-1]);
            break;

        default:
            printf("\nThe option you have selected is invalid. Please try again.");
            continue;
    }
    break;
    }
}

    /*After choosing how the course wil be undertaken applicant will the select the campus where the course will be done.
This function also allows for expansion, patrenships or addition of satellite campuses*/
void campus() {
    int v;
    char *course_campus [] = {"Main Campus", "Kwale Campus", "Online"};

    printf("\n\n\nSelect campus from which you will be pursuing the course.");
    printf("\n1. Main Campus");
    printf("\n2. Kwale Campus");
    printf("\n3. Online");

     while(v) {
        printf("\n\nChoose campus to attend: ");
        scanf("%d", &v);

        switch(v) {
        case 1:
            printf("\nThe course will be taken at ");
            printf("%s", course_campus [v-1]);
            break;

        case 2:
            printf("\nThe course will be taken at ");
            printf("%s", course_campus [v-1]);
            break;

        case 3:
            printf("\nYou have chosen to pursue the course ");
            printf("%s", course_campus [v-1]);
            break;

        default:
            printf("\nThe option you have selected does not exist. Please try again.");
            continue;
        }
    break;
    }
}

void selection(applicants* user1) {
    if(strcmp(user1->mean, "A") == 0) {
        printf("\n\nThank you for choosing The Technical University of Mombasa\n");
        printf("\n\nPlease expect a letter sent to your email at %s\n", user1->email);
    }

    else if(strcmp(user1->mean, "A-") == 0) {
        printf("\n\nThank you for choosing The Technical University of Mombasa\n");
        printf("\n\nPlease expect a letter sent to your email at %s\n", user1->email);
    }

    else if(strcmp(user1->mean, "B+") == 0) {
        printf("\n\nThank you for choosing The Technical University of Mombasa\n");
        printf("\n\nPlease expect a letter sent to your email at %s\n", user1->email);
    }

    else if(strcmp(user1->mean, "B") == 0) {
            printf("\n\nThank you for choosing The Technical University of Mombasa\n");
            printf("\n\nPlease expect a letter sent to your email at %s\n", user1->email);
        }

        else if(strcmp(user1->mean, "B-") == 0) {
            printf("\n\nThank you for choosing The Technical University of Mombasa\n");
            printf("\n\nPlease expect a letter sent to your email at %s\n", user1->email);
        }

        else if(strcmp(user1->mean, "C+-") == 0) {
            printf("\n\nThank you for choosing The Technical University of Mombasa\n");
            printf("\n\nPlease expect a letter sent to your email at %s\n", user1->email);
        }

        else if(strcmp(user1->mean, "C") == 0) {
            printf("\n\nThank you for choosing The Technical University of Mombasa\n");
            printf("\n\nPlease expect a letter sent to your email at %s\n", user1->email);
        }

        else {
            printf("\n\nThank you for choosing The Technical University of Mombasa\n");
        }
}

    /*This function recieves input from user to proceed*/
void pause() {
    printf("\n\n\nPress any key to continue");
    getch();
            }

/*This function clears the screen*/
void page() {
    //For Windows use
    system("cls");

   /*For Linux use
    system("clear");*/
}


int main() {
    applicants user1;
    welcome();
   pause();
    page();
    registration(&user1);
    account();
    login(&user1);
    course();
    program();
    academic(&user1);
    intake();
    mode();
    campus();
    selection(&user1);
    return 0;
}
