#include <stdio.h>

int main(void)
{
    int number_one;
    int number_two;
    int sum;

    number_one = 5;
    number_two = 3;
    sum = number_one + number_two;

    printf("The sum of %d and %d = %d\n", number_one, number_two, sum);

    float floating_number = 14.37;
    int integer_number = 42;
    double large_floating_number = 12345.6789;
    char letter = 'a';

    printf("%2.2f\n", floating_number);
    printf("%2.2d\n", integer_number);
    printf("%2.2lf\n", large_floating_number);
    printf("%2.2c\n", letter);

    return 0;
}
