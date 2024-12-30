#include <stdio.h>

int print_numbers_in_pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", i);
        }
    printf("\n");
    }
    return 0;
}

int main() {

    print_numbers_in_pattern(5);

    return 0;
}