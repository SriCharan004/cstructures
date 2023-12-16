#include "header.h"
#include <stdio.h>

void wishes(void)
{
	for (int i=0;i<4;i++)
		{
			printf("Hello Worlds\n");
		}
}

int factorial(int n){
	if (n==0 || n==1)
		{
			return 1;
		}
	else if (n<0){
		printf("Don't do ok ok ok that");
	}

	else {
	
		return factorial(n)*factorial(n-1);
	}
}
