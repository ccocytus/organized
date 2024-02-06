/*
** EPITECH PROJECT, 2023
** sort.c
** File description:
** int
*/

#include "../include/shell.h"
#include "../include/my.h"

void swap_materials_if_needed_by_type(material_t *mat_array, int i, int j)
{
    material_t temp;

    if (mat_array[i].type > mat_array[j].type) {
        temp = mat_array[i];
        mat_array[i] = mat_array[j];
        mat_array[j] = temp;
    }
}

void sorted_by_type(material_t *mat_array, int num_materials)
{
    for (int i = 0; i < num_materials - 1; i++) {
        for (int j = i + 1; j < num_materials; j++) {
            swap_materials_if_needed_by_type(mat_array, i, j);
        }
    }
}
