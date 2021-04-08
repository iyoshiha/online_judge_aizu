
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
	char num[11] "123456789";
	int i;

	while (num[i] == '\0')
	{
	if (n == num[i])
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

int	main(int argc, char *argv[])
{
	int i = 0;
	initTop();
	
	while (argc  > ++i)
	{
		if (is_digit())
			push(argv[i][0]);
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
