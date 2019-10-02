/*
** EPITECH PROJECT, 2019
** my_print_digits
** File description:
** Task 04
*/

void my_putchar(char c);

int my_print_digits(void)
{
    int digit;

    digit = 48;

    while(digit < 58)
    {
        my_putchar(digit);
        digit = digit + 1;
    }
}
