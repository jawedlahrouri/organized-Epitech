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
    node_t *temp = malloc(sizeof(node_t));

    if (actual == NULL)
        return 84;
    while (actual->next->id != args[0] || actual == NULL)
        actual = actual->next;
    temp->next = actual->next->next;
    free(actual->next);
    actual->next = temp->next;
    my_printf("%s n°%i - \"%s\"", actual->type, actual->id, actual->name);
    my_printf(" deleted.\n");
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
        return 84;
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
