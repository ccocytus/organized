/*
** EPITECH PROJECT, 2023
** add
** File description:
** int
*/

#include "../include/shell.h"
#include "../include/my.h"
#include <string.h>

void null_ag(char *str)
{
    if (str == NULL)
        exit(84);
}

int add(void *data, char **args)
{
    workshop_t *workshop = (workshop_t *)data;
    int i = 0;
    static int id_counter = 0;
    char *name;
    char *type_str;

    args_null(args);
    while (args[i] != NULL) {
        name = args[i + 1];
        null_ag(name);
        type_str = args[i];
        null_ag(type_str);
        if (add_material(workshop, name, type_str, &id_counter) != 0) {
            return 0;
        }
        i += 2;
    }
    return 0;
}

int add_material(workshop_t *w_p, const char *name, const char *tp, int *id)
{
    material_t *new_material = malloc(sizeof(material_t));

    if (new_material == NULL) {
        return 0;
    }
    new_material->id = (*id);
    (*id)++;
    new_material->name = my_strdup(name);
    new_material->type = convert_string_to_type(tp);
    new_material->next = NULL;
    if (w_p->materials == NULL) {
        w_p->materials = new_material;
    } else {
        add_to_workshop(w_p, new_material);
    }
    print_material_added(new_material);
    return 0;
}

void add_to_workshop(workshop_t *workshop, material_t *new_material)
{
    material_t *current = workshop->materials;

    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_material;
}

void print_material_added(const material_t *material)
{
    const char *str = material_type_to_string(material->type);
    int id_oj = material->id;
    const char *name_oj = material->name;

    mini_printf("%s n°%d - \"%s\" added.\n", str, id_oj, name_oj);
}
