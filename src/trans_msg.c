/*
** EPITECH PROJECT, 2019
** trans_msg
** File description:
** 103
*/

#include "my.h"

float **trans_msg(char **msg, char **av)
{
    int nb = sqrt((nb_space(av[1]) + 1));
    float **psw = malloc(sizeof(float *) * nb);
    int k = 0;

    for (int i = 0; i != nb; i++) {
        psw[i] = malloc(sizeof(float) * (nb + 1));
        for (int j = 0; j != nb; j++) {
            psw[i][j] = atof(msg[k]);
            k++;
        }
    }
    return (psw);
}
