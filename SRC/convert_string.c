/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-1-organized-yves.manirambona
** File description:
** convert_string_to_type
*/

#include "../include/shell.h"
#include "../include/my.h"
#include <string.h>

type_t convert_string_to_type(const char *str)
{
    if (my_strcmp(str, "WIRE") == 0) {
        return WIRE;
        }
    if (my_strcmp(str, "ACTUATOR") == 0) {
        return ACTUATOR;
        }
    if (my_strcmp(str, "DEVICE") == 0) {
        return DEVICE;
        }
    if (my_strcmp(str, "SENSOR") == 0) {
        return SENSOR;
        }
    if (my_strcmp(str, "PROCESSOR") == 0) {
        return PROCESSOR;
    } else {
        free(str);
        exit(84);
    }
}
