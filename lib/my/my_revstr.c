/*
** EPITECH PROJECT, 2020
** MY_STRREV
** File description:
** No Description
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    char *tmp = str;
    int i = 0;
    int j = my_strlen(tmp) - 1;
    char rev;

    while (i < j)
    {
        rev = tmp[i];
        tmp[i] = tmp[j];
        tmp[j] = rev;
        i = i + 1;
        j = j - 1;
    }
    return (tmp);
}
