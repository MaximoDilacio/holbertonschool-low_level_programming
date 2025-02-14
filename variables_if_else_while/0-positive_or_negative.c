#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Funcion principal
 *
 * Return: Retorna 0 si se ejecuta sin errores
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
  printf("%d Is positive\n", n);
}
else if (n < 0)
{
  printf("%d Is negative\n", n);
}
else
{
  printf("%d Is zero\n", n);
}
/* your code goes there */
return (0);
}
