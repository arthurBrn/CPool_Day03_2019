/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** Task 02
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    int cpt = 122;

    while (cpt > 96) {
        my_putchar(cpt);
        cpt = cpt - 1;
    }

    return (0);
}
