/*
** EPITECH PROJECT, 2024
** my_strcmp
** File description:
** compare string
*/

int my_strcmp(char *const str1, char *const str2)
{
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            return 1;
    }
    return 0;
}
