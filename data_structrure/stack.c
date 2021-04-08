
#include <stdio.h>
# include <stdlib.h>
# include <string.h>

#define MAX 1000
#define ERROR -1
#define SUCCESS 1
int	top; // this points at the last of elements of S;
int S[MAX]; // Stack;

int	is_digit(int n)
{
	int ary[10] = {0,1,2,3,4,5,6,7,8,9};
	int i;

	while (i < 10)
	{
	if (n == (ary[i] - '0'))
		return (1);
	i++;
	}
	else return (0);
}

int initTop()
{
	top = 0;
}

int	isEmpty()
{
	if (top == 0)
		return (1);
	return (0);
}

int	isFull()
{
	return (top >= MAX - 1);
}

int	push(int num)
{
	if (isFull())
		return (ERROR);
	S[++top] = num;
		return (SUCCESS);
}

int	pop()
{
	if isEmpty()
		return (ERROR);
	top--;
	return (S[top+1]);
}

int c_to_i(char c)
{
	if (!is_digit())
	{
		
	}

}

int	main(int argc, char *argv[])
{
	int i = 0;
	int tmp;
	initTop();
	
	while (argc  > ++i)
	{
		tmp = argv[i][0];
		if tmp == '*'
			// handle *; times all of the elements in the stack; 
		else if (tmp == '+' || tmp == '-')
			if (is_digit())
		{
			push(argv[i][0]);
			
		}
		else if (argv[i][0] == '+')
		{
			push(argv[i][0] );
			// need to think as ascii;

		}
		else if (argv[i][0] == '+')
		{
			push();

		}





	}

	return(0);
}
