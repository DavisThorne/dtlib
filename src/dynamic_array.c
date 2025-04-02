#include "dynamic_array.h"
#include <stdio.h>
#include <stdlib.h>

void init_array_int(int_array *arr, size_t init_size) {
    arr->array = malloc(init_size * sizeof(int));
    arr->used_size = 0;
    arr->size = init_size;
}

void int_array_insert(int_array *arr, int element) {
    if (arr->used_size == arr->size) {
        arr->size *= 2;
        arr->array = realloc(arr->array, arr->size*sizeof(int));
    }
}
