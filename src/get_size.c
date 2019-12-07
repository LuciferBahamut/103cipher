/*
** EPITECH PROJECT, 2019
** get_size
** File description:
** size
*/

int get_size(float **f)
{
    int i = 0;

    while (f[i])
        i++;
    return (i);
}
