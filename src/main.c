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
    if (av[3][0] == '0') {
    key = make_key(av[2]);
    display_key_0(key, make_size(av[2]));
    password = make_password(av[1], get_size(key));
    display_psw_0(password, num_ligne(my_strlen(password), get_size(av[2])));
//    password = multi_architect(password, key, get_size(key));
    }
    if (av[3][0] == '1') {
        return (0);
    }
    return (0);
}
