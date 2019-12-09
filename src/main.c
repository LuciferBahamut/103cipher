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
    key = make_key(av[2]);
    password = make_password(av[1], get_size(key));
    return (0);
}
