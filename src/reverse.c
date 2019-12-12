/*
** EPITECH PROJECT, 2019
** reverse
** File description:
** 103
*/

#include "my.h"

float reverse2x2(float **matrix)
{
    float a = matrix[0][0];
    float b = matrix[0][1];
    float c = matrix[1][0];

    float d = matrix[1][1];

    float ad = a * d;

    float bc = b * c;

    float det = ad - bc;

    float A = 1 / det;

    float **rev_matrix = malloc(2 * sizeof(float *));

    for (int i = 0; i != 2 ;i++)
        rev_matrix[i] = malloc(2);
    if (det == 0)
        return (84);

    rev_matrix[0][0] = A * d;
    rev_matrix[0][1] = A * -b;
    rev_matrix[1][0] = A * -c;
    rev_matrix[1][1] = A * a;
    display_key_1(rev_matrix);
}
