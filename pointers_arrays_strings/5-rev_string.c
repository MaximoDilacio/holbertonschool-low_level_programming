#include "main.h"
#include <string.h>
/**
 * rev_string - print a reversed string
 * @s: parameter
*/
void rev_string(char *s)
{
	int cont = 0, n = 0, i;
	char aux;

	while (s[n] != 0)
	{
		cont++;
		n++;
	}
	i = cont / 2;
	n = 0;
	while (i > 0)
	{
		cont--;
		aux = s[cont];
		s[cont] = s[n];
		s[n] = aux;
		n++;
		i--;
	}
}
