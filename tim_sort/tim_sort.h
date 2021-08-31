#ifndef TIM_SORT_H_INCLUDED
#define TIM_SORT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Sort(void **a, int n,int (*cmp)(void *, void *));  

#endif // TIM_SORT_H_INCLUDED