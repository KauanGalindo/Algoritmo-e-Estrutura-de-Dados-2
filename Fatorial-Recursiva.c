#include <stdio.h>

int fatorial (int n)
{
	int fat;
	if (n==0) fat = 1;
	else	  fat = n * fatorial (n-1);
	return fat;
}

int main()
{
	int n;
	scanf ("%d", n);
	printf ("Fatoria eh: %d", fatorial(n));
	return 0;
}

