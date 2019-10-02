/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** Task 06
*/

void my_putchar(char c);

void display_this(int a)
{
    if (a < 98) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb2(void)
{
    int a = 00;
    int b = 01;

    while (a != 99) {
        my_putchar(a / 10 + '0');
        my_putchar(a % 10 + '0');
        my_putchar(' ');
        my_putchar(b / 10 + '0');
        my_putchar(b % 10 + '0');
        display_this(a);
        if (b == 99 && a <= 99) {
            a++;
            b = a + 1;
        } else {
            b++;
        }
    }
}
