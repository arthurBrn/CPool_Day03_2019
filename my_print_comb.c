/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** Task 05
*/

void my_putchar(char c);

void display(int a)
{
    if (a < 7) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{
    int a = 0;
    int b = 1;
    int c = 2;

    while (a != 8) {
        my_putchar(a + '0');
        my_putchar(b + '0');
        my_putchar(c + '0');
        display(a);
        if (c == 9 && b != 8) {
            b = b + 1;
            c = b;
        }
        if (c == 9 && b == 8) {
            a++;
            b = a + 1;
            c = b + 1;
        } else {
            c++;
        }
    }
    return (0);
}
