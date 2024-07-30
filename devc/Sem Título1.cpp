#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,i,f,multi;
    printf("Digite N1 :");
	scanf ("%i",&n1);
	multi=1;
	for (i=n1;i<=n1;i--)
    {
    printf("%i * %i", multi, n1);
	multi=multi*i;
	    
       
        
    }
    printf("O fatorial de %i eh: %i", n1, multi);
    return 0;
}
