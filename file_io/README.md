# <p align="center">File I/O</p>

<p align="center">
  <img src="https://www.tutorialcup.com/wp-content/uploads/2019/09/Files-I_O-in-C-Programming.jpg" alt="img File I/O" />
</p>

File management in C, or File I/O (Input/Output), allows you to read and write data to files stored on disk. This is essential for programs that require data persistence beyond program execution.

Here are the key concepts of file management in C:

- **Text and Binary Files**: Text files store data in ASCII characters, while binary files store it in binary format.
- **File opening**: Use fopen() to open a file by specifying the mode (like “r” for reading, “w” for writing, etc.).
- **Reading and writing**: The fscanf() and fprintf() functions are used to read and write to text files, while fread() and fwrite() are for binary files.
- **File closing**: After operations, close the file with fclose() to free the resources.
- **File pointer**: A FILE type pointer is used to represent an open file in C.

File operations in C are powerful and allow detailed manipulation of permanently stored data

# <p align="center">Examples</p>

This is an example of:

- Opening a file:

```
FILE *fptr;
fptr = fopen("file_name.txt", "r");
if (fptr == NULL)
{
	printf("Error opening file.\n");
	exit(1);
}

```
- Reading a text file:

```
char c;
while ((c = fgetc(fptr)) != EOF)
{
	printf("%c", c);
}

```
- Writing to a text file:

```
fprintf(fptr, "this is example.\n");

```
- Closing a file:

```
fclose(fptr);
```
- Reading a binary file:
```
struct monStruct data;
fread(&data, sizeof(struct monStruct), 1, fptr);

```
- Writing to a binary file:

```
struct monStruct data = { .attribut1 = valeur1, .attribut2 = valeur2 };
fwrite(&data, sizeof(struct monStruct), 1, fptr);
```
These examples show how to open, read, write, and close files in C

# <p align="center">Installation Instructions</p>
```
- A C compiler: All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
## Installation Instructions

To compile and run this doubly linked list project in C, follow the steps below:

1. **Install a C compiler**:
    Make sure you have a C compiler installed on your system. GCC is a popular choice for Unix-like systems, while Visual Studio is commonly used on Windows.

2. **Download the source code**:
    Clone or download the project source code from the GitHub repository or any other code sharing platform.

3. **Compile the project**:
Open a terminal or command prompt and navigate to the directory containing the source code. Compile the code using the following command:
```bash
gcc -o source_program_name.c
```
- You are authorized to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/main/_putchar.c)

# <p align="center">compilation commands for each task</p>

```
0. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
```

```
1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
```

```
2. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
```

```
3. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
```

# <p align="center">Prototypes</p>
```
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

```

# <p align="center">Tutorials</p>

- [File I/O](https://en.wikipedia.org/wiki/File_descriptor)
- [C Programming in Linux Tutorial - open() read() write() Functions](https://www.youtube.com/watch?v=WxNSJAbQ8Ik&ab_channel=DexTutor)

## ➤ License
Distributed under the MIT License.
See [LICENSE](https://www.holbertonschool.fr/) for more information.


## 🙇 Author
#### Stephanie Carvalho
- LinkedIn: [Stephanie C.rvalho](https://www.linkedin.com/in/stephanie-c-35582a13a/)
