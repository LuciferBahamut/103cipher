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
    
    printf("B\n size = %d\n", size);
    for (int s = 0; s < size; s++) {
        printf("s = %d i = %d j = %d\n", s, i ,j);
        r += f[i][s] * key[s][j];
    }
    printf("C\n");
    return (r);
}

float **calc_decryt_m(float **psw, float **key, int size, int lenght)
{
    float **r =make_emptymatrix(size, lenght);

    printf("A\n");
    for(int i = 0; i < lenght; i++) {
        for (int j = 0; j < size; j++) {
            r[i][j] = calc_multi_decryt(psw, key, i, j, size);
        }
    }
    printf("D\n");
    return (r);
}
