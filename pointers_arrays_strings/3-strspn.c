#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: return count
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s) {
		found = 0;
		for (i = 0; accept[i]; i++) {
			if (*s == accept[i]) {
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
		s++;
	}

	return count;
}

