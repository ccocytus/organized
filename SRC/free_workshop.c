/*
** EPITECH PROJECT, 2023
** free_workshop.c
** File description:
** void
*/

#include "../include/shell.h"
#include "../include/my.h"
#include <string.h>

void free_workshop(workshop_t *workshop)
{
    material_t *current = workshop->materials;
    material_t *next;

    while (current != NULL) {
        next = current->next;
        free(current->name);
        free(current);
        current = next;
    }
    free(workshop);
}
