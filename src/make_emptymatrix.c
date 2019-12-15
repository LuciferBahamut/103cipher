/*
** EPITECH PROJECT, 2019
** make_emptymatrix
** File description:
** matrix
*/

#include "my.h"

float **make_emptymatrix(int width, int height)
{
    float **r = malloc(sizeof(float *) * height);

    for (int i = 0; i < height; i++)
        r[i] = malloc(width);
    return (r);
}

int **make_emptymatrix_d(int width, int height)
{
    int **r = malloc(sizeof(float *) * (height + 1));

    for (int i = 0; i < height; i++)
        r[i] = malloc(width + 1);
    return (r);
}
