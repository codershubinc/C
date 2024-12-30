#include <stdio.h>

int main(){
    struct student{
        char name[50];
        int roll;
        float marks;
    };
    struct student s;
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Displaying Information:\n");
    printf("Name: ");
    puts(s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);


    return 0;
}

// explaining all the steps of the code
// 1. The program defines a structure named student.
// 2. The structure contains three members: name, roll, and marks.
// 3. The program prompts the user to enter information for a student.
// 4. The program reads the information from the user and stores it in the structure.
// 5. The program then displays the information entered by the user.
// 6. The program uses the puts() function to display the name of the student.
// 7. The program uses the printf() function to display the roll number and marks of the student.
// 8. The program returns 0 to indicate successful execution.
// 9. The program ends.
