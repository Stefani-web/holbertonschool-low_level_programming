C - MORE MALLOC, FREE

By: Julien Barbier

<img src="https://miro.medium.com/v2/resize:fit:1400/1*7lBxAamBlTEtKNdr1MOgPQ.jpeg" alt="malloc">

-----------------------
TASK 0. Trust no one

- GitHub repository: holbertonschool-low_level_programming
- Directory: more_malloc_free
- File: 0-malloc_checked.c

Write a function that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process
termination with a status value of 98

------------------------
TASK 1. string_nconcat

- GitHub repository: holbertonschool-low_level_programming
- Directory: more_malloc_free
- File: 1-string_nconcat.c

Write a function that concatenates two strings.

Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2
if NULL is passed, treat it as an empty string

------------------------
TASK 2. _calloc

- GitHub repository: holbertonschool-low_level_programming
- Directory: more_malloc_free
- File: 2-calloc.c

Write a function that allocates memory for an array, using malloc.

Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
The _calloc function allocates memory for an array of nmemb elements
of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL

FYI: The standard library provides a different function: calloc.
Run man calloc to learn more.

-------------------------

TASK 3. array_range

- GitHub repository: holbertonschool-low_level_programming
- Directory: more_malloc_free
- File: 3-array_range.c

Write a function that creates an array of integers.

Prototype: int *array_range(int min, int max);
The array created should contain all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array
If min > max, return NULL
If malloc fails, return NULL

--------------------------
