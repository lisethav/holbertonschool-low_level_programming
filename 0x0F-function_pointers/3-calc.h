#ifndef _CALCULATOR_
#define _CALCULATOR_
/* LIBRARIES */
#include <stdlib.h>
#include <stdio.h>

/* ESTRUCTURES */
/**
 * struct op - struct to fuction
 *
 * @op: the operator
 * @f: fuction we call
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* FUNCTION PROTOTYPE */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);
#endif /* CALCULATOR*/
