/*
** EPITECH PROJECT, 2024
** organized
** File description:
** organized
*/

#include "my.h"
#include "node.h"
#include "shell.h"

static int sort_type(node_t *head, int *swap)
{
    node_t *current = head;

    while (current->next != NULL) {
        if (my_strncmp(current->type, current->next->type) > 0) {
            swap_node(current, current->next);
            *swap = 1;
        }
        current = current->next;
    }
    return 0;
}

int bubble_type(void *data)
{
    node_t *head = *((node_t **)data);
    int swap;

    if (head == NULL)
        return 84;
    do {
        swap = 0;
        sort_type(head, &swap);
    } while (swap);
    return 0;
}

static int sort_name(node_t *head, int *swap)
{
    node_t *current = head;

    while (current->next != NULL) {
        if (my_strncmp(current->name, current->next->name) > 0) {
            swap_node(current, current->next);
            *swap = 1;
        }
        current = current->next;
    }
    return 0;
}

int bubble_name(void *data)
{
    node_t *head = *((node_t **)data);
    int swap;

    if (head == NULL)
        return 84;
    do {
        swap = 0;
        sort_name(head, &swap);
    } while (swap);
    return 0;
}

static int sort_id(node_t *head, int *swap)
{
    node_t *current = head;

    while (current->next != NULL) {
        if (current->id > current->next->id) {
            swap_node(current, current->next);
            *swap = 1;
        }
        current = current->next;
    }
    return 0;
}

int bubble_id(void *data)
{
    node_t *head = *((node_t **)data);
    int swap;

    if (head == NULL)
        return 84;
    do {
        swap = 0;
        sort_id(head, &swap);
    } while (swap);
    return 0;
}

int swap_node(node_t *left, node_t *right)
{
    char *temp_type = NULL;
    char *temp_name = NULL;
    int temp_id = 0;

    if (left == NULL || right == NULL)
        return 84;
    temp_type = left->type;
    temp_name = left->name;
    temp_id = left->id;
    left->type = right->type;
    left->name = right->name;
    left->id = right->id;
    right->type = temp_type;
    right->name = temp_name;
    right->id = temp_id;
    return 0;
}

void my_rev_list(void *data)
{
    node_t *previous = NULL;
    node_t *actual = *((node_t **)data);
    node_t *next = NULL;

    while (actual != NULL) {
        next = actual->next;
        actual->next = previous;
        previous = actual;
        actual = next;
    }
    *((node_t **)data) = previous;
}
