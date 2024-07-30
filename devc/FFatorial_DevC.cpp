#include <stdio.h>
#include <locale.h>

	
int fatorial (int n) {
    int i, f = 1;
    for (i=1; i<=n; i++)
        f = f*i;
    return f;
}
int main() {
setlocale (LC_ALL, "Portuguese");    
	
	int x, y;
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &x);
    y = fatorial (x);
    printf("O fatorial de %d é = %d",x, y);
    
    return 0;
}
