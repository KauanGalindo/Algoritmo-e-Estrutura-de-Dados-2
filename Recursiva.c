#include <stdio.h>

int fib (int n) {
    printf("\nDentro da funçao fib n=%d", n);
    if (n==0) return 0;
    if (n==1) return 1;
    
    return fib(n -1) + fib (n - 2);
    
}

int main()
{
    int aux, n;
    
    printf("Digite o valor de n: ");
    scanf ("%d", &n);
    
    aux = fib(n);
    
    printf ("\n\nO valor retornado eh %d", aux);

    return 0;
}
