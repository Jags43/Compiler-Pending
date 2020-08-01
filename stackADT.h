
#ifndef STACK_H
#define STACK_H

#include "stackADTDef.h"

stack *stack_init();

void push(stack *stack_ptr, void* node);

void* top(stack *stack_ptr);

void* pop(stack* stack_ptr);

#endif
