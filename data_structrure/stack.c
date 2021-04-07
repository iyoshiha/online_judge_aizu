
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
	


	return(0);
}
