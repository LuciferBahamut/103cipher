/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

float **make_key(char *key);
float **make_password(char *password, int size);
int get_size(float **f);

int main(int argc, char **argv)
{
    float **key;
    float **password;
    if (argc != 4)
        return (84);
    key = make_key(argv[2]);
    password = make_password(argv[1], get_size(key));
    return (0);
}
