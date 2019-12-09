
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
float **multi_architech(float **f, float **key, int size);
void display_key_0(float **key, int size);
int make_size(char *key);

#endif
