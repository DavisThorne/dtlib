#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H
#include <stddef.h>

typedef struct int_array {
    int *array;
    size_t size;
    size_t used_size;
} int_array;


void init_array_int(int_array *arr, size_t size);

void int_array_insert(int_array *arr, int element);

#endif
