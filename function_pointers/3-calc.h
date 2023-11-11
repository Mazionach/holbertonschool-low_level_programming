
#ifndef CALCULATOR
#define CALCULATOR

/**
 * struct operation - operation struct
 * @s: operator symbol
 * @f: function pointer
 */
struct operation
{
	char *s;
	int (*f)(int, int);
};

typedef struct operation op_t;


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
