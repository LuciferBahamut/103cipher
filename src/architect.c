/*
** EPITECH PROJECT, 2019
** architect
** File description:
** arch
*/

#include "my.h"

float calc_multi(float **f, float **key, int i, int j, int size)
{
    float r = 0;
    
    for (int s = 0; s < size; s++)
        r += f[i][s] * key[s][j];
    return (r);
}

float **mult_architech(float **f, float **key, int size, int lenght)
{
    float **r = make_emptymatrix(size, lenght);

    for (int i = 0; i < lenght; i++) {
        for (int j = 0; j < size; j++) {
            r[i][j] = calc_multi(f, key, i, j, size);
        }
    }
    return (r);
}

float calc_multi_decryt(float **f, float **key, int i, int j, int size)
{
    float r = 0;
    
    for (int s = 0; s < size; s++)
        r += f[i][s] * key[s][j];
    return (r);
}

float **calc_decryt_m(float **psw, float **key, int size, int lenght)
{
    float **r =make_emptymatrix(size, lenght);

    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            r[i][j] = ceil(calc_multi_decryt(psw, key, i, j, size));
        }
    }
    return (r);
}
