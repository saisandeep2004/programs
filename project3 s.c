#include <stdio.h>

int main() {
    char full_name[100];
    char gender[10];
    char city[100];

    // Read student information
    printf("Enter student's full name: ");
    scanf("%[^\n]%*c", full_name);

    printf("Enter student's gender: ");
    scanf("%[^\n]%*c", gender);

    printf("Enter student's city: ");
    scanf("%[^\n]%*c", city);

    // Display student information
    printf("Student Information:\n");
    printf("Full Name: %s\n", full_name);
    printf("Gender: %s\n", gender);
    printf("City: %s\n", city);   
}
