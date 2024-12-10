/*
** EPITECH PROJECT, 2024
** organized
** File description:
** organized
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/node.h"
#include "../include/shell.h"

int add(void *data, char **args)
{
    static int id = 0;
    node_t *node = malloc(sizeof(node_t));

    node->next = NULL;
    node->type = args[0];
    node->name = args[1];
    node->id = id;
    my_printf("%s n°%i - ""%s\n", args[0], id, args[1]);
    id++;
    return 0;
}

int del(void *data, char **args)
{
    return 0;
}

int sort(void *data, char **args)
{
    return 0;
}

int disp(void *data, char **args)
{
    return 0;
}

int main(void)
{
    node_t *linked = {NULL, NULL, 0, NULL};

    workshop_shell("blabla");
    return 0;
}
