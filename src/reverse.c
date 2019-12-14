/*
** EPITECH PROJECT, 2019
** reverse
** File description:
** 103
*/

#include "my.h"

float **matrix_det_calc(float **matrix, float det1, float det2, float det3)
{
    float **matrix_det = make_emptymatrix(3, 3);

    matrix_det[0][0] = det1;
    matrix_det[0][1] = det2;
    matrix_det[0][2] = det3;
    matrix_det[1][0] = -1 * ((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix[1][2]));
    matrix_det[1][1] = (matrix[0][0] * matrix[2][2]) - (matrix[0][2] * matrix[2][0]);
    matrix_det[1][2] = -1 * ((matrix[0][0] * matrix[1][2]) - (matrix[1][0] * matrix[0][2]));
    matrix_det[2][0] = (matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]);
    matrix_det[2][1] = -1 * ((matrix[0][0] * matrix[2][1]) - (matrix[0][1] * matrix[2][0]));
    matrix_det[2][2] = (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
    return (matrix_det);
}

float **reverse3x3(float **matrix, int size)
{
    float det1 = (matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]);
    float det2 = -1 * ((matrix[0][1] * matrix[2][2]) - (matrix[0][2] * matrix[2][1]));
    float det3 = (matrix[0][1] * matrix[1][2]) - (matrix[0][2] * matrix[1][1]);
    float det = (matrix[0][0] * det1) + (matrix[1][0] * det2) + (matrix[2][0] * det3);
    float **matrix_det = matrix_det_calc(matrix, det1, det2, det3);
    float A = 1 / det;
    
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            matrix_det[i][j] = matrix_det[i][j] * A;
    display_key_1(matrix_det, size);
    return (matrix_det);
}

float **reverse2x2(float **matrix, int size)
{
    float a = matrix[0][0];
    float b = matrix[0][1];
    float c = matrix[1][0];
    float d = matrix[1][1];
    float ad = a * d;
    float bc = b * c;
    float det = ad - bc;
    float A = 1 / det;
    float **rev_matrix = malloc(sizeof(float *) * size);

    for (int i = 0; i != 2 ;i++)
        rev_matrix[i] = malloc(size);
    if (det != 0) {
        rev_matrix[0][0] = A * d;
        rev_matrix[0][1] = A * -b;
        rev_matrix[1][0] = A * -c;
        rev_matrix[1][1] = A * a;
        display_key_1(rev_matrix, size);
    }
    return (rev_matrix);
}
