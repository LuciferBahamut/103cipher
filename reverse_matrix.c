/*
** EPITECH PROJECT, 2019
** reverse matrix
** File description:
** 103 cipher
*/

#include "my.h"

float reverse_2x2(void)
{
    int ad = matrix[0][0] * matrix[1][1];
    int bc = matrix[0][1] * matrix[1][0];
    float det = ad - bc;
    float temp = 1 / det;
    float a;
    float b;
    float c;
    float d;
    float *decryt_result;

    if (det == 0)
        return (84);
    else {
        a = temp * d;
        b = temp * -c;
        c = temp * -b;
        d = temp * a;
    }
    decrypt_result[0] = a;
    decrypt_result[1] = b;
    decrypt_result[2] = c;
    decrypt_result[3] = d;
    return (decryt_matrix);
}
