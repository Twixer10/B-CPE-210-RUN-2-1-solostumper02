/*
** EPITECH PROJECT, 2021
** PALINDROME
** File description:
** No Description found
*/

#include "./include/my.h"

int check(char *str)
{
    int i = 0;
    int k = my_strlen(str) - 1;

    while (i < k) {
        if (str[i++] != str[k--])
            return (84);
    }
    return (0);
}

int main(int ac, char **av)
{
    char *tmp;

    if (ac == 2) {
        tmp = my_strlowcase(av[1]);
        if (check(tmp) == 84) {
            my_putstr("not a palindrome.\n");
        } else {
            my_putstr("palindrome!\n");
        }
    } else {
        my_putstr("Error: missing arguments.");
        return (84);
    }
    return (0);
}
