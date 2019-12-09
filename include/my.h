
/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** 103architect
*/

#ifndef MY_H_
#define MY_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void display_help(void);
int error_handling(int ac, char **av);
float **make_key(char *key);
float **make_password(char *password, int size);
int get_size(float **f);
int my_strlen(char *str);

#endif
