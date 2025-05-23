/*
** EPITECH PROJECT, 2025
** Lib-OOP-GC
** File description:
** string.c
*/

#include "../../include/safe_string.h"
#include <stdlib.h>
#include <string.h>

static void string_ctor(String_t *self, va_list *args)
{
    const char *str = va_arg(*args, const char *);

    if (str) {
        self->length = strlen(str);
        self->value = malloc(self->length + 1);
        if (self->value) {
            strcpy(self->value, str);
        } else {
            self->length = 0;
        }
    } else {
        self->value = NULL;
        self->length = 0;
    }
}

static void string_dtor(String_t *self)
{
    if (self->value) {
        safe_free((Object_t **)&self->value);
    }
}

static const String_t string_description = {
    .base = {
        .__size__ = sizeof(String_t),
        .__name__ = "String",
        .__ctor__ = (void (*)(void *, va_list *))string_ctor,
        .__dtor__ = (void (*)(void *))string_dtor
    },
    .value = NULL,
    .length = 0,
    .from_file = &string_from_file
};

const Class_t *String_Class = (const Class_t *)&string_description;
