/*
** EPITECH PROJECT, 2024
** organized
** File description:
** organized
*/

#include "my.h"
#include "node.h"
#include "shell.h"

int add_multiple(void *data, char *args, char *args_second)
{
    static int id = 0;
    node_t *new_node = malloc(sizeof(node_t));
    node_t **link = data;

    if (new_node == NULL)
        return 84;
    if (find_type(args) == 1) {
        new_node->type = my_strdup(args);
        new_node->name = my_strdup(args_second);
        new_node->id = id;
        new_node->next = *link;
        *link = new_node;
        my_printf("%s n°%i - \"%s\"", new_node->type, id, new_node->name);
        my_printf(" added.\n");
        id++;
    }
    if (find_type(args) == 0)
        return 84;
    return 0;
}

int find_type(char *args)
{
    if (my_strcmp(args, "WIRE") == 0)
        return 1;
    if (my_strcmp(args, "ACTUATOR") == 0)
        return 1;
    if (my_strcmp(args, "DEVICE") == 0)
        return 1;
    if (my_strcmp(args, "SENSOR") == 0)
        return 1;
    if (my_strcmp(args, "PROCESSOR") == 0)
        return 1;
    return 0;
}
