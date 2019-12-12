/*
** EPITECH PROJECT, 2019
** trans_msg
** File description:
** 103
*/

#include "my.h"

float **trans_msg(char **msg, char **av, int size)
{
    float **psw;
    int k = 0;
    int nbnb = nb_space(av[2]) + 1;
    int nb_ligne = nbnb / size;

    if (nb_ligne % size != 0)
        nb_ligne++;
    psw = malloc(sizeof(float *) * nb_ligne);
    for (int i = 0; i != nb_ligne; i++) {
        psw[i] = malloc(sizeof(float) * size);
        for (int j = 0; j != size; j++) {
            psw[i][j] = atof(msg[k]);
            k++;
        }
    }
    return (psw);
}
