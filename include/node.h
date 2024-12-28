/*
** EPITECH PROJECT, 2024
** node.h
** File description:
** struct
*/

#include "my.h"
#include <stdarg.h>

#ifndef STRUCTS_H_
    #define STRUCTS_H_

typedef struct node {
    char *type;
    char *name;
    int id;
    struct node *next;
} node_t;
#endif
