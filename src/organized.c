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
    printf("A\n");
    if (actual == NULL)
        return 84;
    if (my_str_isnum(args[0]) == 0)
        return 84;
    if (actual->id == my_getnbr(args[ 0])) {
        printf("1/n");
        temp = actual;
        actual = actual->next;
        free(temp);
        return 0;
    }
    for (;actual->next != NULL; actual = actual->next) {
        printf("hello/n");
        if (actual->next->id== my_getnbr(args[0])) {
            temp = actual->next;
            actual->next = actual->next->next;
            free(temp);
        }
    }
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
    node_t *act = *((node_t **)data);

    if (act == NULL)
        return 84;
    while (act != NULL) {
            my_printf("%s n°%i - \"%s\"\n", act->type, act->id, act->name);
        act = act->next;
    }
    return 0;
}

int main(void)
{
    node_t *link = NULL;

    workshop_shell(&link);
    return 0;
}
