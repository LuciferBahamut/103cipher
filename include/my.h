
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
char **my_split(char *src);
int error_handling(int ac, char **av);
float **make_key(char *key);
float **make_password(char *password, int size);
int get_size(float **f);
int my_strlen(char *str);
int make_size(char *key);
float **mult_architech(float **f, float **key, int size, int lenght);
float **make_emptymatrix(int width, int height);
void display_key_0(float **key, int size);
int make_size(char *key);
int num_ligne(int len, int size);
void display_psw_0(float **password, int size, int sizepsw);
void encryt(char **av, float **key, float **password);
void decryt(char **av, float **key, float **password);
float **reverse2x2(float **matrix);
void display_key_1(float **key);
void display_psw_1(float **password, int size, int sizepsw);
int nb_space(char *msg);
float **trans_msg(char **msg, char **av, int size);
float **calc_decryt_m(float **psw, float **key, int size, int lenght);

#define LENGHT num_ligne(my_strlen(av[1]), make_size(av[2]))

#endif
