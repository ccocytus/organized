/*
** EPITECH PROJECT, 2023
** display.c
** File description:
** int
*/

#include "../include/shell.h"
#include "../include/my.h"
#include <stdlib.h>

void free_material(material_t *material) {
    free(material->name);
    free(material);
}

// Call this function when you're done using a material
void cleanup(workshop_t *workshop) {
    material_t *current = workshop->materials;
    material_t *next;

    while (current != NULL) {
        next = current->next;
        free_material(current);
        current = next;
    }
}

void sort_materials(workshop_t *workshop, material_t *mat_array,
    int num_materials)
{
    if (workshop->sorted_by_id) {
        sorted_by_id(mat_array, num_materials);
    }
    if (workshop->sorted_by_name) {
        sorted_by_name(mat_array, num_materials);
    }
    if (workshop->sorted_by_type) {
        sorted_by_type(mat_array, num_materials);
    }
    if (workshop->sorted_reverse) {
        sorted_reverse(mat_array, num_materials);
    }
}

void print_materials(material_t *mat_array, int num_materials)
{
   const char *str;

    for (int i = 0; i < num_materials; i++) {
        str = material_type_to_string(mat_array[i].type);
        mini_printf("%s n°%d - \"%s\"\n", str,
            mat_array[i].id, mat_array[i].name);
    }
}

void disp_materials(void *data, material_t *mat_array, int num_materials)
{   
    workshop_t *workshop = (workshop_t *)data;

    sort_materials(workshop, mat_array, num_materials);
    print_materials(mat_array, num_materials);
}

int number_of_materials(material_t *current)
{
    int num_materials = 0;

    while (current != NULL) {
        num_materials++;
        current = current->next;
    }
    return num_materials;
}

int disp(void *data, char **args)
{
    int i = 0;
    workshop_t *workshop = (workshop_t *)data;
    material_t *current = workshop->materials;
    material_t *mat_array;
    int num_materials = number_of_materials(current);

    disp_not_null(args);
    mat_array = malloc(num_materials * sizeof(material_t));
    if (mat_array == NULL)
        exit(84);
    current = workshop->materials;
    while (current != NULL) {
        mat_array[i] = *current;
        i++;
        current = current->next;
    }
    disp_materials(data, mat_array, num_materials);
    free(mat_array);
    return 0;
}
