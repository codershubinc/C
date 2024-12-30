#include <stdio.h>

int even_numbers(int n)
{

    if (n % 2 == 0)
    {
        return printf("%d is an even number\n", n);
    }
    else
    {
        return printf("%d is an odd number\n", n);
    }
}

int main()
{
    even_numbers(5);
    even_numbers(8);
    even_numbers(15);
    even_numbers(10);
    even_numbers(20);
    even_numbers(25);
    even_numbers(30);
    even_numbers(35);
    even_numbers(40);
    even_numbers(45);
    even_numbers(50);
    return 0;
}