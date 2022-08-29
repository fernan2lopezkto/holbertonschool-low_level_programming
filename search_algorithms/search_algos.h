#ifndef SERCH_H
#define SERCH_H

/*     --INCLUDES--     */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/*    --PROTOTYPES--    */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);


/*    oters pototypes   */
void print_array(const int *array, size_t size);

#endif
