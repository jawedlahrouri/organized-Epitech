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
    (void)data;
    if (args[1] == NULL)
        return 84;
    for (int j = 0; args[j] != NULL && args[j + 1] != NULL; j = j + 2) {
        if (args[j] == NULL)
            return 84;
        if (args[j + 1] == NULL)
            return 84;
        if (add_multiple(data, args[j], args[j + 1]) == 84)
            return 84;
    }
    return 0;
}

int del(void *data, char **args)
{
    node_t *actual = *((node_t **)data);

    (void)data;
    if (args[0] == NULL)
        return 84;
    if (actual == NULL)
        return 84;
    for (int j = 0; args[j] != NULL; j++) {
        if (my_str_isnum(args[j]) == 0)
            return 84;
        if (del_multiple(data, args, j) == 84)
            return 84;
    }
    return 0;
}

int sort(void *data, char **args)
{
    (void)data;
    if (args[0] == NULL)
        return 84;
    for (int i = 0; args[i] != NULL; i++) {
        if (my_strcmp(args[i], "-r") == 0)
            my_rev_list(data);
        if (my_strcmp(args[i], "NAME") == 0)
            bubble_name(data);
        if (my_strcmp(args[i], "TYPE") == 0)
            bubble_type(data);
        if (my_strcmp(args[i], "ID") == 0)
            bubble_id(data);
    }
    return 0;
}

int disp(void *data, char **args)
{
    node_t *act = *((node_t **)data);
    (void)args;
    (void)data;
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
    int status = 0;

    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h' && argv[1][2] == '\0')
            return display_help();
    }
    status = workshop_shell(&link);
    return status;
}
