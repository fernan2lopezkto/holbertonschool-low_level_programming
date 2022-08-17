<h1>doubly_linked_lists</h1>
<br>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to explain to anyone, without the help of Google:</p>

<h3>General</h3>
- What is a doubly linked list<br>
- How to use doubly linked lists<br>
- Start to look for the right source of information without too much help<br>
<h2>Requirements</h2>
<h3>General</h3>
<br>
 - Allowed editors: vi, vim, emacs<br>
 - All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)<br>
 - All your files should end with a new line<br>
 - A README.md file, at the root of the folder of the project is mandatory<br>
 - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
 - You are not allowed to use global variables<br>
 - No more than 5 functions per file<br>
 - The only C standard library functions allowed are malloc, free, printf and exit<br>
 - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we  won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples<br>
 - The prototypes of all your functions should be included in your header file called lists.h<br>
 - Don’t forget to push your header file<br>
 - All your header files should be include guarded<br>
 
 <h3>More Info</h3>
Please use this data structure for this project:
<pre><code>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
</code></pre>

<h2>Tasks</h2>
<h3>0. Print list</h3>
mandatory
<h3>Write a function that prints all the elements of a dlistint_t list.</h3>

  Prototype: size_t print_dlistint(const dlistint_t *h);<br>
  Return: the number of nodes<br>
  Format: see example<br>
<pre><code>
julien@ubuntu:~/Doubly linked lists$ cat 0-main.c 
#include stdlib.h
#include string.h
#include stdio.h
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/Doubly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
<br>
File: 0-print_dlistint.c
<br>
<h2>1. List length</h2>
mandatory
<h3>Write a function that returns the number of elements in a linked dlistint_t list.</h3>

  Prototype: size_t dlistint_len(const dlistint_t *h);<br>

<pre><code>
julien@ubuntu:~/Doubly linked lists$ cat 1-main.c 
#include stdlib.h
#include string.h
#include stdio.h
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
julien@ubuntu:~/Doubly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
<br>
File: 1-dlistint_len.c
<br>
<h2>2. Add node</h2>
mandatory
<h3>Write a function that adds a new node at the beginning of a dlistint_t list.</h3>
<br>
  Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);<br>
  Return: the address of the new element, or NULL if it failed<br>

<pre><code>
julien@ubuntu:~/Doubly linked lists$ cat 2-main.c 
#include stdlib.h
#include string.h
#include stdio.h
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
<br>
File: 2-add_dnodeint.c
<br>


<h2>3. Add node at the end</h2>
mandatory
<h3>Write a function that adds a new node at the end of a dlistint_t list.</h3>

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
<pre><code>
julien@ubuntu:~/Doubly linked lists$ cat 3-main.c 
#include stdlib.h
#include string.h
#include stdio.h
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
File: 3-add_dnodeint_end.c


<h2>4. Free list</h2>
mandatory
<h3>Write a function that frees a dlistint_t list.</h3>

Prototype: void free_dlistint(dlistint_t *head);

<pre><code>
julien@ubuntu:~/Doubly linked lists$ cat 4-main.c
#include stdlib.h
#include string.h
#include stdio.h
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Doubly linked lists$ 

</code></pre>
File: 4-free_dlistint.c



<h2>5. Get node at index</h2>
mandatory
<h3>Write a function that returns the nth node of a dlistint_t linked list.<h3>

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);<br>
where index is the index of the node, starting from 0<br>
if the node does not exist, return NULL<br>
<pre><code>
julien@ubuntu:~/Doubly linked lists$ cat 5-main.c
#include stdlib.h
#include string.h
#include stdio.h
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf("%d\n", node->n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
File: 5-get_dnodeint.c


<h2>6. Sum list</h2>
mandatory
<h3>Write a function that returns the sum of all the data (n) of a dlistint_t linked list.</h3>

Prototype: int sum_dlistint(dlistint_t *head);<br>
if the list is empty, return 0<br>
<pre><code>
julien@ubuntu:~/Doubly linked lists$ cat 6-main.c 
#include stdlib.h
#include string.h
#include stdio.h
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    sum = sum_dlistint(head);
    printf("sum = %d\n", sum);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/Doubly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/Doubly linked lists$ 

</code></pre>
File: 6-sum_dlistint.c


<h2>7. Insert at index</h2>
mandatory
<h3>Write a function that inserts a new node at a given position.</h3>

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);<br>
where idx is the index of the list where the new node should be added. Index starts at 0<br>
Returns: the address of the new node, or NULL if it failed<br>
if it is not possible to add the new node at index idx, do not add the new node and return NULL<br>
Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction<br>
<pre><code>
julien@ubuntu:~/Doubly linked lists$ cat 7-main.c
#include stdlib.h
#include string.h
#include stdio.h
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/Doubly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/Doubly linked lists$
</code></pre>
File: 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c


<h2>8. Delete at index</h2>
mandatory
<h3>Write a function that deletes the node at index index of a dlistint_t linked list.</h3>

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);<br>
where index is the index of the node that should be deleted. Index starts at 0<br>
Returns: 1 if it succeeded, -1 if it failed<br>
<pre><code>
julien@ubuntu:~/Doubly linked lists$ cat 8-main.c
#include stdlib.h
#include string.h
#include stdio.h
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
julien@ubuntu:~/Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
File: 8-delete_dnodeint.c
