/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** Task 07
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int reste = 0;

    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
    if (nb >= 10) {
        reste = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(reste + '0');
    } else {
        my_putchar(nb + '0');
    }

    return (0);
}
