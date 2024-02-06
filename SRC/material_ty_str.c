/*
** EPITECH PROJECT, 2023
** material_type_to_string
** File description:
** material_ty_str
*/

#include "../include/shell.h"
#include "../include/my.h"
#include <string.h>

const char *material_type_to_string(type_t type)
{
    switch (type) {
        case WIRE:
            return "WIRE";
        case ACTUATOR:
            return "ACTUATOR";
        case DEVICE:
            return "DEVICE";
        case SENSOR:
            return "SENSOR";
        case PROCESSOR:
            return "PROCESSOR";
        default:
            exit(84);
    }
}
