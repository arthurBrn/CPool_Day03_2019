/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** Task 01
*/

void my_putchar(char c);

int my_print_alpha(void)
{
    int cpt;

    cpt = 96;

    while(cpt != 122)
    {
        my_putchar(cpt = cpt + 1);
    }

    return(0);
}
