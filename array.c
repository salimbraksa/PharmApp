//
//  array.c
//  array
//
//  Created by Salim Braksa on 12/21/15.
//  Copyright © 2015 Braksa Salim. All rights reserved.
//

#include "array.h"

// Functions Definitions

Array* array_init() {
    
    Array* array = (Array*)malloc(sizeof(Array));
    array -> size = 0;
    array -> capacity = VECTOR_INITIAL_CAPACITY;
    array -> items = malloc(sizeof(void*) * array -> capacity);
    
    return array;
    
}

void array_append(Array* array, void* value) {
        
    // Realloc if array's capacity is full
    array_realloc(array);
    
    // Increment array's size
    int index = array->size++;
    
    // Append and increment array's size
    array->items[index] = value;
    
}

void* array_get(Array* array, int index) {
    
    if (index >= array->size || index < 0) {
        printf("Index %d out of bounds for array of size %d\n", index, array->size);
        exit(1);
    }
    return array->items[index];
    
}

void array_set(Array* array, int index, void* item) {
    
    if (index >= array->size || index < 0) {
        printf("Index %d out of bounds for array of size %d\n", index, array->size);
        exit(1);
    }
    array->items[index] = item;
    
}

void array_realloc(Array* array) {
    
    if (array->size >= array->capacity) {
        array->capacity++;
        array->items = realloc(array->items, sizeof(void*)*array->capacity);
    }
    
}

void array_free(Array* array) {
    
    // Free items
    free(array->items);
    
    // Free array
    free(array);
    
}