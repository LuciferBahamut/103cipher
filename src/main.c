/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    float **key;
    float **password;

    if (error_handling(ac, av) == 1)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_help();
        return (0);
    }
    if (av[3][0] == '0')
        encryt(av, key, password);
    if (av[3][0] == '1')
        decryt(av, key, password);
    return (0);
}
