/*
** EPITECH PROJECT, 2024
** organized
** File description:
** organized
*/

#include "my.h"
#include "node.h"
#include "shell.h"

void my_rev_list(void *data)
{
    node_t *previous = NULL;
    node_t *actual = *((node_t **)data);
    node_t *next = actual->next;

    while (actual != NULL) {
        next = actual->next;
        actual->next = previous;
        previous = actual;
        actual = next;
    }
    *((node_t **)data) = previous;
}

