/*
** EPITECH PROJECT, 2023
** initialize_workshop
** File description:
** struct
*/

#include "../include/shell.h"
#include "../include/my.h"
#include <string.h>

workshop_t *initialize_workshop(void)
{
    workshop_t *workshop = malloc(sizeof(workshop_t));

    if (workshop != NULL) {
        workshop->materials = NULL;
    }
    return workshop;
}
