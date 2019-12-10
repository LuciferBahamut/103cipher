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

void display_psw_0(float **password, int size, int sizepsw)
{
    int i = 0;
    int j = 0;

    printf("\nEncrypted message:\n");
    for (i = 0; i != sizepsw; i++) {
        for (j = 0; j != size; j++) {
            if (i == sizepsw -1 && j == size - 1) {
                  printf("%.0f", password[i][j]);
                  break;
            }
            printf("%.0f ", password[i][j]);
        }
    }
    printf("\n");
}
