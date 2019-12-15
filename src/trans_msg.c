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
    int nbnb = nb_space(av[1]);
    int nb_ligne = num_ligne(nbnb, size);

    if (nbnb % size == 1)
        nb_ligne = nb_ligne + 1;
    psw = malloc(nb_ligne * sizeof(float *));
    for (int i = 0; i != nb_ligne; i++) {
        psw[i] = malloc(sizeof(float) * size);
        for (int j = 0; j != size; j++) {
            psw[i][j] = atof(msg[k]);
            k++;
        }
    }
    return (psw);
}
