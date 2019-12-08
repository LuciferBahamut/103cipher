/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

float **make_key(char *key);

int main(int argc, char **argv)
{
    float **key;
    if (argc != 4)
        return (84);
    key = make_key(argv[2]);
    return (0);
}
