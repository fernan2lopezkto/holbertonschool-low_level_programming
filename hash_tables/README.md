<h1>C - Hash tables</h1>

<h2>Learning Objectives</h2>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<h2>General</h2>

- What is a hash function<br>
- What makes a good hash function<br>
- What is a hash table, how do they work and how to use them<br>
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table<br>
- What are the advantages and drawbacks of using hash tables<br>
- What are the most common use cases of hash tables<br>

<h2>Requirements<>/h2
<h3>General</h3>

- Allowed editors: vi, vim, emacs<br>
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89<br>
- All your files should end with a new line<br>
- A README.md file, at the root of the folder of the project is mandatory<br>
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
- You are not allowed to use global variables<br>
- No more than 5 functions per file<br>
- You are allowed to use the C standard library<br>
- The prototypes of all your functions should be included in your header file called hash_tables.h<br>
- Don’t forget to push your header file<br>
- All your header files should be include guarded<br>

<h3>More Info</h3>
Data Structures<br>
Please use these data structures for this project:

<pre><code>
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

</code></pre>

Tests<br>
We strongly encourage you to work all together on a set of tests<br>

Python Dictionaries<br>
Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type d = {'a': 1, 'b': 2}, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about how dictionaries are implemented in Python 2.7 (not mandatory).<br>

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. Read more here (not mandatory).<br>

<h2>Tasks</h2>
<h2>0. >>> ht = {}</h2>
mandatory<br>
<h3>Write a function that creates a hash table.</h3>

- Prototype: hash_table_t *hash_table_create(unsigned long int size);<br>
- where size is the size of the array<br>
- Returns a pointer to the newly created hash table<br>
- If something went wrong, your function should return NULL<br>

<pre><code>
julien@ubuntu:~/Hash tables$ cat 0-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
julien@ubuntu:~/Hash tables$ ./a 
0x238a010
julien@ubuntu:~/Hash tables$ valgrind ./a
==7602== Memcheck, a memory error detector
==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==7602== Command: ./a
==7602== 
0x51fc040
==7602== 
==7602== HEAP SUMMARY:
==7602==     in use at exit: 8,208 bytes in 2 blocks
==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
==7602== 
==7602== LEAK SUMMARY:
==7602==    definitely lost: 16 bytes in 1 blocks
==7602==    indirectly lost: 8,192 bytes in 1 blocks
==7602==      possibly lost: 0 bytes in 0 blocks
==7602==    still reachable: 0 bytes in 0 blocks
==7602==         suppressed: 0 bytes in 0 blocks
==7602== Rerun with --leak-check=full to see details of leaked memory
==7602== 
==7602== For counts of detected and suppressed errors, rerun with: -v
==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Hash tables$
</code></pre>


File: 0-hash_table_create.c


<h2>1. djb2</h2>
mandatory
<h3>Write a hash function implementing the djb2 algorithm.</h3>

- Prototype: unsigned long int hash_djb2(const unsigned char *str);<br>
- You are allowed to copy and paste the function from this page<br>
- julien@ubuntu:~/Hash tables$ cat 1-djb2.c <br>
- unsigned long int hash_djb2(const unsigned char *str)<br>

<pre><code>
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
julien@ubuntu:~/Hash tables$ 
julien@ubuntu:~/Hash tables$ cat 1-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
julien@ubuntu:~/Hash tables$ ./b 
6953392314605
3749890792216096085
5861846
julien@ubuntu:~/Hash tables$ 
</code></pre>



File: 1-djb2.c

<h2>2. key -> index</h2>
mandatory
<h3>Write a function that gives you the index of a key.</h3>

- Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);<br>
- where key is the key<br>
- and size is the size of the array of the hash table<br>
- This function should use the hash_djb2 function that you wrote earlier<br>
- Returns the index at which the key/value pair should be stored in the array of the hash table<br>
- You will have to use this hash function for all the next tasks<br>

<pre><code>
julien@ubuntu:~/Hash tables$ cat 2-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c
julien@ubuntu:~/Hash tables$ ./c 
6953392314605
237
3749890792216096085
341
5861846
470
julien@ubuntu:~/Hash tables$ 

</code></pre>


File: 2-key_index.c
  

<h2>3. >>> ht['betty'] = 'cool'</h2>
mandatory
Write a function that adds an element to the hash table.<br>

- Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);<br>
- Where ht is the hash table you want to add or update the key/value to<br>
- key is the key. key can not be an empty string<br>
- and value is the value associated with the key. value must be duplicated. value can be an empty string<br>
- Returns: 1 if it succeeded, 0 otherwise<br>
- In case of collision, add the new node at the beginning of the list<br>

<pre><code>
julien@ubuntu:~/Hash tables$ cat 3-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
julien@ubuntu:~/Hash tables$
</code></pre>

<h3>If you want to test for collisions, here are some strings that collide using the djb2 algorithm:</h3>

- hetairas collides with mentioner<br>
- heliotropes collides with neurospora<br>
- depravement collides with serafins<br>
- stylist collides with subgenera<br>
- joyful collides with synaphea<br>
- redescribed collides with urites<br>
- dram collides with vivency<br>

File: 3-hash_table_set.c
  

<h2>4. >>> ht['betty']<h2>
mandatory
<h3>Write a function that retrieves a value associated with a key.</h3>

- Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
- where ht is the hash table you want to look into
- and key is the key you are looking for
- Returns the value associated with the element, or NULL if key couldn’t be found


<pre><code>

julien@ubuntu:~/Hash tables$ cat 4-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");

    value = hash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    value = hash_table_get(ht, "Bob");
    printf("%s:%s\n", "Bob", value);
    value = hash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = hash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", value);
    value = hash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", value);
    value = hash_table_get(ht, "98");
    printf("%s:%s\n", "98", value);
    value = hash_table_get(ht, "c");
    printf("%s:%s\n", "c", value);
    value = hash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", value);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
julien@ubuntu:~/Hash tables$ ./e 
python:awesome
Bob:and Kris love asm
N:queens
Asterix:Obelix
Betty:Cool
98:Battery Street
c:isfun
javascript:(null)
julien@ubuntu:~/Hash tables$ 
</code></pre>


File: 4-hash_table_get.c
  

<h2>5. >>> print(ht)</h2>
mandatory
<h3>Write a function that prints a hash table.</h3>

- Prototype: void hash_table_print(const hash_table_t *ht);
- where ht is the hash table
- You should print the key/value in the order that they appear in the array of hash table
- Order: array, list
- Format: see example
- If ht is NULL, don’t print anything

<pre><code>
julien@ubuntu:~/Hash tables$ cat 5-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f
julien@ubuntu:~/Hash tables$ ./f 
{}
{'Betty': 'Cool', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Asterix': 'Obelix'}
julien@ubuntu:~/Hash tables$ 
</code></pre>

File: 5-hash_table_print.c
  

<h2>6. >>> del ht</h2>
mandatory
<h3>Write a function that deletes a hash table.</h3>

- Prototype: void hash_table_delete(hash_table_t *ht);<br>
- where ht is the hash table

<pre><code>
julien@ubuntu:~/Hash tables$ cat 6-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Streetz");
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);
    hash_table_set(ht, "98", "Battery Street"); 
    hash_table_set(ht, "hetairas", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z");
    hash_table_set(ht, "mentioner", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z Chu");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g
julien@ubuntu:~/Hash tables$ valgrind ./g
==6621== Memcheck, a memory error detector
==6621== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==6621== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==6621== Command: ./g
==6621== 
{'Betty': 'Cool', 'mentioner': 'Bob', 'hetairas': 'Bob Z Chu', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Tim': 'Britton', 'Asterix': 'Obelix'}
==6621== 
==6621== HEAP SUMMARY:
==6621==     in use at exit: 0 bytes in 0 blocks
==6621==   total heap usage: 37 allocs, 37 frees, 8,646 bytes allocated
==6621== 
==6621== All heap blocks were freed -- no leaks are possible
==6621== 
==6621== For counts of detected and suppressed errors, rerun with: -v
==6621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Hash tables$ 
</code></pre>

File: 6-hash_table_delete.c
