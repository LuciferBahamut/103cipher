/*
** EPITECH PROJECT, 2019
** architect
** File description:
** arch
*/

#include "my.h"

float calc_multi(float **f, float **key, int i, int j)
{
    float r = 0;
   
    for (int s = 0; s < 3; s++)
        r += f[i][s] * key[s][j];
    return (r);
}

float **mult_architech(float **f, float **key, int size)
{
    float **r = make_emptymatrix(size, get_size(f));
    
    for (int i = 0; i < get_size(f); i++) {
        for (int j = 0; j < size; j++)
            r[i][j] = calc_multi(f, key, i, j);
    }
    return (r);
}
