/*
** EPITECH PROJECT, 2023
** sort.c
** File description:
** int
*/

#include <unistd.h>
#include <stdio.h>
#include "../include/shell.h"
#include "../include/my.h"

void sorted_reverse(material_t *mat_array, int num_materials)
{
    material_t temp;

    for (int i = 0; i < num_materials / 2; i++) {
        temp = mat_array[i];
        mat_array[i] = mat_array[num_materials - i - 1];
        mat_array[num_materials - i - 1] = temp;
    }
}

void handle_sorting(workshop_t *workshop, char **args)
{
    int i = 0;

    while (args[i] != NULL) {
        if (my_strcmp(args[i], "-r") == 0) {
            workshop->sorted_reverse = 1;
        }
        if (my_strcmp(args[i], "NAME") == 0) {
            workshop->sorted_by_name = 1;
        }
        if (my_strcmp(args[i], "TYPE") == 0) {
            workshop->sorted_by_type = 1;
        }
        if (my_strcmp(args[i], "ID") == 0) {
            workshop->sorted_by_id = 1;
        }
        i++;
    }
}

int sort(void *data, char **args)
{
    workshop_t *workshop = (workshop_t *)data;

    handle_sorting(workshop, args);
    return 0;
}
