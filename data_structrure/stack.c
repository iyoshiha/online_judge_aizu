
#include <stdio.h>
# include <stdlib.h>
# include <string.h>

int	top;
int *S; // Stack;

int initTop()
{

}

int	isEmpty()
{
	if (top == 0)
		return (1);
	return (0);
}

int	isFull(int top, int num)
{

	return (top >= num - 1);
}

int	push(int num)
{
	S[++top] = num;
}

int	pop()
{
	if isEmpty()
		// error
	top--;
	return S[top+1];
}

int	main(void)
{
	top = 0;	


	return(0);
}
