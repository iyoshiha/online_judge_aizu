
#include <stdio.h>
# include <stdlib.h>
# include <string.h>

#define MAX (1000)
int	top; // this points at the last of elements of S;
int S[MAX]; // Stack;

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
	initTop();	

	return(0);
}
