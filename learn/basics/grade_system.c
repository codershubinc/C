#include <stdio.h>

// Function to determine grade based on marks
int grade_system(int marks)
{
    // Check if marks are 90 or above, assign Grade A
    if (marks >= 90)
    {
        return printf("Grade A\n");
    }
    // Check if marks are 80 or above, assign Grade B
    else if (marks >= 80)
    {
        return printf("Grade B\n");
    }
    // Check if marks are 70 or above, assign Grade C
    else if (marks >= 70)
    {
        return printf("Grade C\n");
    }
    // Check if marks are 60 or above, assign Grade D
    else if (marks >= 60)
    {
        return printf("Grade D\n");
    }
    // If marks are below 60, assign Grade F
    else
    {
        return printf("Grade F\n");
    }
}

// This function call should be inside main() to avoid compilation errors
// grade_system(80);

int main()
{
    // Test case 1: Marks = 95 (Grade A)
    grade_system(95); // Expected output: "Grade A"

    // Test case 2: Marks = 85 (Grade B)
    grade_system(85); // Expected output: "Grade B"

    // Test case 3: Marks = 75 (Grade C)
    grade_system(75); // Expected output: "Grade C"

    // Test case 4: Marks = 65 (Grade D)
    grade_system(65); // Expected output: "Grade D"

    // Test case 5: Marks = 55 (Grade F)
    grade_system(55); // Expected output: "Grade F"

    // Test case 6: Marks = 89 (Grade B)
    grade_system(89); // Expected output: "Grade B"

    // Test case 7: Marks = 70 (Grade C)
    grade_system(70); // Expected output: "Grade C"

    // Test case 8: Marks = 100 (Grade A)
    grade_system(100); // Expected output: "Grade A"

    return 0;
}