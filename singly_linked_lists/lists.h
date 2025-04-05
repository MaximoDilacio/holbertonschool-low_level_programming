/* lists.h */
#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: node structure for singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prototipo de función */
size_t print_list(const list_t *h);

#endif /* LISTS_H */   
