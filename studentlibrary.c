#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_STUDENTS 50

struct Book {
    char title[100];
    int book_id;
    int borrowed_by;
};

struct Student {
    char name[100];
    int student_id;
    int borrowed_books[MAX_BOOKS];
};

struct Book books[MAX_BOOKS];
struct Student students[MAX_STUDENTS];
int num_books = 0;
int num_students = 0;

void register_new_book() {
    if (num_books < MAX_BOOKS) {
        struct Book new_book;
        printf("Enter book title: ");
        scanf("%s", new_book.title);
        new_book.book_id = num_books + 1;
        new_book.borrowed_by = -1;
        books[num_books] = new_book;
        num_books++;
        printf("Book registered successfully!\n");
    } else {
        printf("Maximum number of books reached.\n");
    }
}

void display_available_books() {
    printf("Available books:\n");
    for (int i = 0; i < num_books; i++) {
        if (books[i].borrowed_by == -1) {
            printf("Book ID: %d, Title: %s\n", books[i].book_id, books[i].title);
        }
    }
}

void borrow_book() {
    int book_id, student_id;
    printf("Enter book ID: ");
    scanf("%d", &book_id);
    printf("Enter student ID: ");
    scanf("%d", &student_id);
    if (book_id > num_books || book_id < 1) {
        printf("Invalid book ID.\n");
        return;
    }
    if (student_id > num_students || student_id < 1) {
        printf("Invalid student ID.\n");
        return;
    }
    if (books[book_id-1].borrowed_by != -1) {
        printf("Book is already borrowed.\n");
        return;
    }
    int borrowed_count = 0;
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (students[student_id-1].borrowed_books[i] != 0) {
            borrowed_count++;
        }
    }
    if (borrowed_count == MAX_BOOKS) {
        printf("Maximum number of borrowed books reached.\n");
        return;
    }
    books[book_id-1].borrowed_by = student_id;
    students[student_id-1].borrowed_books[book_id-1] = 1;
    printf("Book borrowed successfully!\n");
}

void return_book() {
    int book_id, student_id;
    printf("Enter book ID: ");
    scanf("%d", &book_id);
    printf("Enter student ID: ");
    scanf("%d", &student_id);
    if (book_id > num_books || book_id < 1) {
        printf("Invalid book ID.\n");
        return;
    }
    if (student_id > num_students || student_id < 1) {
        printf("Invalid student ID.\n");
        return;
    }
    if (books[book_id-1].borrowed_by != student_id) {
        printf("Book is not borrowed by this student.\n");
        return;
    }
    books[book_id-1].borrowed_by = -1;
    students[student_id-1].borrowed_books[book_id-1] = 0;
    printf("Book returned successfully!\n");
}

void register_new_student() {
    if (num_students < MAX_STUDENTS) {
        struct Student new_student;
        printf("Enter student name: ");
        scanf("%s", new_student.name);
        new_student.student_id = num_students + 1;
        memset(new_student.borrowed_books, 0, sizeof(new_student.borrowed_books));
        students[num_students] = new_student;
        num_students++;
        printf("Student registered successfully!\n");
    } else {
        printf("Maximum number of students reached.\n");
    }
}

int main(){
    int choice;
    do{
    printf("LIBRARY MANAGEMENT SYSTEM\n\n");
    printf("Choose an option below:\n");
    printf("1. Register new book\n");
    printf("2. Register new student\n");
    printf("3. Borrow a book\n");
    printf("4. Return a book\n");
    printf("5. Display available book\n");
    printf("6. Exit\n");
    scanf("%d",&choice);

    switch(choice){
    case 1:
    register_new_book();
    break;
    case 2:
    register_new_student();
    break;
    case 3:
    borrow_book();
    break;
    case 4:
    return_book();
    break;
    case 5:
    display_available_books();
    case 6:
    break;
    }
}

while(choice!=6);
return 0;
}
