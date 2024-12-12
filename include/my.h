/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** Header avec les fonctions
*/

#ifndef MY_H
    #define MY_H
    #include <stdio.h>
    #include <stdarg.h>
    #include <stdlib.h>
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
char *my_revstr(char *str);
void my_putchar(char c);
void flag_d(va_list list);
void flag_o(va_list list);
void flag_s(va_list list);
void flag_i(va_list list);
void flag_c(va_list list);
void flag_percent(va_list list);
void flag_x2(va_list list);
void flag_x(va_list list);
int flag_detector(const char *format, int i, va_list list);
int my_printf(const char *format, ...);
int main(void);
char *my_strdup(char const *src);
int add_multiple(void *data, char *args, char *args_second);
int find_type(char *args);
int my_strcmp(char *const str1, char *const str2);
int my_str_isnum(char const *str);
int my_getnbr(const char *str);
int del_multiple(void *data, char **args, int j);
int del_first(void *data);
int del_last(void *data);
int del_the_one(void *data);
int del_mid(void *data, char **args, int j);
#endif
