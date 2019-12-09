/*
** EPITECH PROJECT, 2019
** display
** File description:
** 103 cipher
*/

#include "my.h"

void display_key_0(float **key, int size)
{
    printf("Key matrix:\n");
    for (int i = 0; i != size; i++) {
        for (int j = 0; j != size; j++)
            printf("%.0f\t", key[i][j]);
        printf("\n");
    }
}
