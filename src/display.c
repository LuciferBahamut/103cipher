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
        for (int j = 0; j != size; j++) {
            if (j == size - 1)
                printf("%.0f", key[i][j]);
            else
                printf("%.0f\t", key[i][j]);
        }
        printf("\n");
    }
}

void display_psw_0(float **password, int size, int sizepsw)
{
    printf("\nEncrypted message:\n");
    for (int i = 0; i != sizepsw; i++) {
        for (int j = 0; j != size; j++) {
            if (i == sizepsw -1 && j == size - 1) {
                  printf("%.0f", password[i][j]);
                  break;
            }
            printf("%.0f ", password[i][j]);
        }
    }
    printf("\n");
}

void display_key_1(float **key, int size)
{
    printf("Key matrix:\n");
    for (int i = 0; i != size; i++) {
        for (int j = 0; j != size; j++)
            if (j == size - 1)
                printf("%.3f", key[i][j]);
            else
                printf("%.3f\t", key[i][j]);
    printf("\n");
    }
}

void display_psw_1(int **password, int size, int sizepsw)
{
    int nb_ligne = sizepsw / size;
        
    printf("\nDecrypted message:\n");
    if (sizepsw % size == 1)
        nb_ligne++;
    for (int i = 0; i != nb_ligne; i++) {
        for (int j = 0; j != size; j++) {
            if (password[i][j] < 32 || password[i][j] > 126)
                break;
            printf("%c", password[i][j]);
        }
    }
    printf("\n");
}
