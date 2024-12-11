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
    node_t **link = data;
    node_t *new_node = malloc(sizeof(node_t));

    if (new_node == NULL)
        return 84;

    new_node->type = my_strdup(args[0]);
    new_node->name = my_strdup(args[1]);
    if (!new_node->type || !new_node->name) {
        free(new_node);
        return 84;
    }
    new_node->id = id;
    new_node->next = *link;
    *link = new_node;
my_printf("%s n°%i - \"%s\" added.\n", new_node->type, id, new_node->name);
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
    node_t *actual = *((node_t **)data);

    if (actual == NULL)
        my_printf ("y a r");
    while (actual != NULL) {
            my_printf("%s n°%i - \"%s\"\n", actual->type, actual->id, actual->name);
        actual = actual->next;
    }
    return 0;
}

int main(void)
{
    node_t *link = NULL;

    workshop_shell(&link);
    return 0;
}
