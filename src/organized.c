/*
** EPITECH PROJECT, 2024
** organized
** File description:
** organized
*/

#include "my.h"
#include "node.h"
#include "shell.h"

int add(void *data, char **args)
{
    for (int j = 0; args[j] != NULL && args[j + 1] != NULL; j = j + 2) {
        if (!args[j] || !args[j + 1])
            return 84;
        add_multiple(data, args[j], args[j + 1]);
    }
    return 0;
}

int del(void *data, char **args)
{
    node_t *actual = *((node_t **)data);

    if (actual == NULL)
        return 84;
    for (int j = 0; args[j] != NULL; j++) {
        if (my_str_isnum(args[j]) == 0)
            return 84;
        del_multiple(data, args, j);
    }
    return 0;
}

int sort(void *data, char **args)
{
    return 0;
}

int disp(void *data, char **args)
{
    node_t *act = *((node_t **)data);

    if (act == NULL)
        return 84;
    while (act != NULL) {
            my_printf("%s n°%i - \"%s\"\n", act->type, act->id, act->name);
        act = act->next;
    }
    return 0;
}

int main(int argc, char **argv)
{
    node_t *link = NULL;

    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h' && argv[1][2] == '\0')
            return display_help();
    }
    workshop_shell(&link);
    return 0;
}
