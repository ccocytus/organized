/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#ifndef SHELL_H
    #define SHELL_H

    #include <stdlib.h>

int add(void *data, char **args);
int del(void *data, char **args);
int sort(void *data, char **args);
int disp(void *data, char **args);
typedef enum type {
    WIRE,
    ACTUATOR,
    DEVICE,
    SENSOR,
    PROCESSOR,
    
} type_t;

typedef struct material {
    int id;
    char *name;
    type_t type;
    struct material *next;
} material_t;

typedef struct workshop {
    material_t *materials;
    int sorted_reverse;
    int sorted_by_name;
    int sorted_by_type;
    int sorted_by_id;
    int display;
} workshop_t;

int workshop_shell(void *data);
const char *material_type_to_string(type_t type);
type_t convert_string_to_type(const char *str);
void free_workshop(workshop_t *workshop);
const char *material_type_to_string(type_t type);
workshop_t *initialize_workshop(void);
void del_material(workshop_t *workshop, int id);
void disp_del(material_t *material);
int add_material(workshop_t *w_p, const char *name, const char *tp, int *id);
void add_to_workshop(workshop_t *workshop, material_t *new_material);
void print_material_added(const material_t *material);
void args_null(char **args);
void disp_not_null(char **args);
int number_of_materials(material_t *current);
void sorted_by_name(material_t *mat_array, int num_materials);
void sorted_by_type(material_t *mat_array, int num_materials);
void sorted_reverse(material_t *mat_array, int num_materials);
void sorted_by_id(material_t *mat_array, int num_materials);
void handle_sorting(workshop_t *workshop, char **args);
#endif /* SHELL_H */
