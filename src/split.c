/*
** EPITECH PROJECT, 2019
** split
** File description:
** 103
*/

#include "my.h"

int nb_space(char *msg)
{
    int i = 0;

    for (int j = 0; msg[j] != '\0'; j++) {
        if (msg[j] == ' ')
            i++;
    }
    return (i);
}

char **my_split(char *src)
{
    char **str = malloc((nb_space(src) + 1) * sizeof(char *));
    int i = 0;
    int k = 0;

    for (int j = 0; src[i] != '\0'; i++) {
        if (src[i] == ' ')
            j++;
        str[j] = malloc(i + 1);
    }
    i = 0;
    for (int j = 0; src[i] != '\0'; i++, k++) {
        if (src[i] == ' ') {
            str[j][i] = '\0';
            j++;
            i++;
            k = 0;
        }
        str[j][k] = src[i];
    }
    return (str);
}
