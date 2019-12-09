/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** 103
*/

#include "my.h"

int error_handling(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h')
        return (0);
    if (ac != 4)
        return (1);
    if (av[3][0] != '0' && av[3][0] != '1')
        return (1);
}
