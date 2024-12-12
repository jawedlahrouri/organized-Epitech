/*
** EPITECH PROJECT, 2024
** organized
** File description:
** organized
*/

#include "my.h"
#include "node.h"
#include "shell.h"

int del_multiple(void *data, char **args, int j)
{
    node_t *a = *((node_t **)data);

    if (a == NULL)
        return 84;
    if (a->id == my_getnbr(args[j]) && a->next == NULL)
        return del_the_one(data);
    if (a->id == my_getnbr(args[j]))
        return del_first(data);
    for (; a->next != NULL; a = a->next) {
        if (a->next->id == my_getnbr(args[j]) && a->next->next == NULL)
            return del_last(data);
        if (a->next->id == my_getnbr(args[j]))
            return del_mid(data, args, j);
    }
    return 84;
}

int del_first(void *data)
{
    node_t **link = (node_t **)data;
    node_t *temp = *link;

    if (*link == NULL)
        return 84;
    *link = (*link)->next;
    my_printf("%s n°%i", temp->type, temp->id);
    my_printf(" - \"%s\" deleted.\n", temp->name);
    free(temp->type);
    free(temp->name);
    free(temp);
    return 0;
}

int del_last(void *data)
{
    node_t *a = *((node_t **)data);
    node_t **link = (node_t **)data;
    node_t *temp = a->next;

    if (*link == NULL)
        return 84;
    if ((*link)->next == NULL)
        return del_the_one(data);
    while (a->next->next != NULL)
        a = a->next;
    temp = a->next;
    a->next = NULL;
    my_printf("%s n°%i", temp->type, temp->id);
    my_printf(" - \"%s\" deleted.\n", temp->name);
    free(temp->type);
    free(temp->name);
    free(temp);
    return 0;
}

int del_the_one(void *data)
{
    node_t **link = (node_t **)data;

    if (*link == NULL)
        return 84;
    my_printf("%s n°%i", (*link)->type, (*link)->id);
    my_printf(" - \"%s\" deleted.\n", (*link)->name);
    free((*link)->type);
    free((*link)->name);
    free(*link);
    *link = NULL;
    return 0;
}

int del_mid(void *data, char **args, int j)
{
    node_t *a = *((node_t **)data);
    node_t *temp = NULL;

    for (; a->next != NULL; a = a->next) {
        if (a->next->id == my_getnbr(args[j])) {
            temp = a->next;
            my_printf("%s n°%i", a->next->type, a->next->id);
            my_printf(" - \"%s\" deleted.\n", a->next->name);
            a->next = a->next->next;
            free(temp->type);
            free(temp->name);
            free(temp);
            return 0;
        }
    }
}
