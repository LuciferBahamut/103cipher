/*
** EPITECH PROJECT, 2019
** make_key
** File description:
** key
*/

#include "my.h"

int make_size(char *key)
{
    int i = sqrt(my_strlen(key));
    int j = my_strlen(key);
    
    if (!(i * i >= j))
        i++;
    return (i);
}

float **fill_key(float **f, char *key, int size)
{
    int i = 0;

    for (int j = 0; j < size; j++) {
        for (int k = 0; k < size; k++) {
            if (key[i] != '\0') {
                f[j][k] = key[i];
                i++;
            }
            else
                f[j][k] = 0;
        }
    }
    return (f);
}

float **make_key(char *key)
{
    int i = make_size(key);
    float **f = malloc(sizeof(float *) * i);

    for (int j = 0; j < i; j++)
        f[j] = malloc(i);
    return (fill_key(f, key, i));
}
