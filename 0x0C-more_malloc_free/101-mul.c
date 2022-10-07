#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old-size: The size in bytes of the allocated space for ptr.
 * @new-size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         if new_size == 0 and ptr is not NULL - NULL
 *         Otherwise - a pointer to the reallocated memory block.
 */

