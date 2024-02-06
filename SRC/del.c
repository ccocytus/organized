/*
** EPITECH PROJECT, 2023
** del.c
** File description:
** int
*/

#include "../include/shell.h"
#include "../include/my.h"
#include <string.h>

int material_exists(workshop_t *workshop, int id)
{
    material_t *current = workshop->materials;

    while (current != NULL) {
        if (current->id == id) {
            return 1;
        }
        current = current->next;
    }
    return 0;
}

int del(void *data, char **args)
{
    workshop_t *workshop = (workshop_t *)data;
    int id;

    args_null(args);
    for (int i = 0; args[i] != NULL; i++) {
        id = my_getnbr(args[i]);
        if (id == 0 && my_strcmp(args[i], "0") != 0) {
            return 0;
            }
        if (!material_exists(workshop, id)) {
            return 84;
            }
    }
    for (int i = 0; args[i] != NULL; i++) {
        id = my_getnbr(args[i]);
        del_material(workshop, id);
    }
    return 0;
}

void del_material(workshop_t *workshop, int id)
{
    material_t *current = workshop->materials;
    material_t *previous = NULL;

    while (current != NULL && current->id != id) {
        previous = current;
        current = current->next;
    }
    if (current != NULL) {
        if (previous != NULL) {
            previous->next = current->next;
        } else {
            workshop->materials = current->next;
        }
        disp_del(current);
        free(current->name);
        free(current);
    } else {
        exit(84);
    }
}

void disp_del(material_t *material)
{
    const char *str = material_type_to_string(material->type);
    int id_oj = material->id;
    const char *name_oj = material->name;

    mini_printf("%s n°%d - \"%s\" deleted.\n", str, id_oj, name_oj);
}
