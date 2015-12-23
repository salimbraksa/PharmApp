//
//  array.h
//  array
//
//  Created by Braksa - Boutaib on 12/21/15.
//  Copyright © 2015 NSApps. All rights reserved.
//

#ifndef array_h
#define array_h

#include <stdio.h>
#include <stdlib.h>

#define VECTOR_INITIAL_CAPACITY 0

// Define a array type
typedef struct {
    int size;
    int capacity;
    void** items;
} Array;

/// Initialize new array ☺️
Array* array_init();

/// Append element to array
void array_append(Array* array, void* item);

/// Get element at index
void* array_get(Array* array, int index);

/// Set element at index
void array_set(Array* array, int index, void* value);

/// Realloc array if capacity is full
void array_realloc(Array* array);

/// Goodbye array 😔
void array_free(Array* array);

#endif /* array_h */
