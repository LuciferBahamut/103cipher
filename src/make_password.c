/*
** EPITECH PROJECT, 2019
** make_password
** File description:
** password
*/

#include <stdlib.h>
int my_strlen(char *str);

float **fill_password(float **f, char *password, int size, int lines)
{
    int k = 0;

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < size; j++) {
            if (password[k] != '\0') {
                f[i][j] = password[k];
                k++;
            }
            else 
                f[i][j] = 0;
        }
    }
    return (f);
}

int num_ligne(int len, int size)
{
    int i = len / size;

    if (len > i * 2)
        i++;
    return (i);
}

float **make_password(char *password, int size)
{
    float **f;
    int i = num_ligne(my_strlen(password), size);

    f = malloc(sizeof(float*) * i);
    for (int j = 0; j < i; j++)
        f[j] = malloc(size);
    f = fill_password(f, password, size, i);
    return (f);
}
