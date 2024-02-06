/*
** EPITECH PROJECT, 2023
** Organized.c
** File description:
** void
*/

#include "include/shell.h"
#include "include/my.h"
#include <string.h>

int main(void)
{
    workshop_t *workshop = initialize_workshop();

    workshop_shell(workshop);
    free_workshop(workshop);
    return 0;
}
