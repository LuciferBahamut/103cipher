/*
** EPITECH PROJECT, 2019
** displayh
** File description:
** 103
*/

#include "my.h"

void display_help(void)
{
    printf("USAGE\n");
    printf("   ./103cipher message key flag\n");
    printf("\nDESCRIPTION\n");
    printf("   message\t a message, made of ASCII characters\n");
    printf("   key\t\t the encryption key, made of ASCII characters\n");
    printf("   flag\t\t 0 for the message to be encrypted, ");
    printf("1 to be decrypted\n");
}
