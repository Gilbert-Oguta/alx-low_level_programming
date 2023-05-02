<<<<<<< HEAD
#ifndef HEADER_FILE
#define HEADER_FILE
=======
#ifndef LISTS_FILE
#define LISTS_FILE
>>>>>>> 00da1e2c13e670e22ea2b13a682d11393f6d5f62
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
<<<<<<< HEAD
size_t listint_len(const listint_t *h);

=======
>>>>>>> 00da1e2c13e670e22ea2b13a682d11393f6d5f62
#endif
