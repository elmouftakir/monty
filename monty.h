#ifndef B8D2CB0B_981A_48DC_9645_31B260B01246
#define B8D2CB0B_981A_48DC_9645_31B260B01246
#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* Data structure: Stack */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/* Data structure: Instruction */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Function Prototypes */
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void div_stack(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);

int is_number(char *str);
#endif /* MONTY_H */


#endif /* B8D2CB0B_981A_48DC_9645_31B260B01246 */
