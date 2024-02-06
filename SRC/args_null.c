/*
** EPITECH PROJECT, 2023
** display.c
** File description:
** int
*/

#include "../include/shell.h"
#include "../include/my.h"
#include <string.h>

void args_null(char **args)
{
    if (args[0] == NULL)
        exit(84);
}

void disp_not_null(char **args)
{
    if (args[0] != NULL)
        exit(84);
}
