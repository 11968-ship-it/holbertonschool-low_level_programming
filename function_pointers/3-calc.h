#ifndef 3-CALC.H
#define 3-CALC.H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
