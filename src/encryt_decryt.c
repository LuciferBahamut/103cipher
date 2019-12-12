/*
** EPITECH PROJECT, 2019
** encryt decryt
** File description:
** 103
*/

#include "my.h"

void encryt(char **av, float **key, float **password)
{
    key = make_key(av[2]);
    display_key_0(key, make_size(av[2]));
    password = make_password(av[1], make_size(av[2]));
    password = mult_architech(password, key, make_size(av[2]), LENGHT);
    display_psw_0(password, make_size(av[2]), LENGHT);
}

void decryt(char **av, float **key, float **password)
{
    char **msg = my_split(av[1]);

    key = make_key(av[2]);
    password = trans_msg(msg, av, make_size(av[2]));
    printf("transform is ok\n");
    if (make_size(av[2]) == 2)
        key = reverse2x2(key);
    password = calc_decryt_m(password, key, make_size(av[2]), nb_space(av[2]) + 1);
    printf("calc is ok\n");
    display_psw_1(password, make_size(av[2]), LENGHT);
}
