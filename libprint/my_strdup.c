/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** write string
*/
#include <stdlib.h>

static int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *my_strdup(char const *src)
{
    int srclen = my_strlen(src);
    char *dest = malloc(sizeof(char) * (srclen + 1));
    int i = 0;

    if (dest == NULL)
        return NULL;
    for (; srclen != i; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
