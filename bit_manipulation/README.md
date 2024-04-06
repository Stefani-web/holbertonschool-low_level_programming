# <p align="center">Bit_manipulation</p>

<p align="center">
  <img src="https://i0.wp.com/thecleverprogrammer.com/wp-content/uploads/2020/11/Bit-Manipulation-in-C-Programming-Language.png?fit=1280%2C720&ssl=1" alt="img Bit manipulation" />
</p>

Bit manipulation in C is a technique that allows you to work directly with the individual bits of a value stored in memory. By using bit manipulation operators, developers can perform bit-level logic and arithmetic operations, which can be faster and more efficient than working with integer values or other data types.

Here are the most commonly used bit manipulation operators in C:

- **Bitwise AND (&)**: Compares each bit of two numbers and returns a 1 for each position where both bits are 1.
- **Bitwise inclusive OR (|)**: Compares each bit of two numbers and returns a 1 for each position where at least one of the bits is 1.
- **Bitwise exclusive OR (^)**: Compares each bit of two numbers and returns a 1 for each position where exactly one of the bits is 1.
- **NO bit by bit (~)**: Inverts all the bits of a number (0s become 1s and vice versa).
- **Left Shift (<<)**: Shifts all bits of a number to the left a certain number of positions, adding zeros to the right.
- **Shift Right (>>)**: Shifts all bits of a number to the right a certain number of positions, adding zeros to the left or retaining the sign bit for signed numbers.
These operators are essential for tasks such as setting, removing, or toggling individual bits, creating bit masks, and extracting subsets of bits from an integer.

# <p align="center">Examples</p>

This is an example of:

- Set a bit (set a bit to 1):

```
unsigned int setBit(unsigned int num, int position)
{
	return (num | (1 << position));
}

```
- Clear a bit (set a bit to 0):

```
unsigned int clearBit(unsigned int num, int position)
{
	return (num & ~(1 << position));
}

```
- Toggle a bit (change the state of a bit):

```
unsigned int toggleBit(unsigned int num, int position)
{
	return (num ^ (1 << position));
}

```
- Check a bit (test if a bit is 1 or 0):

```
int checkBit(unsigned int num, int position)
{
	return ((num >> position) & 1);
}

```
- Get the rightmost bit (find the first bit to be 1):
```
int getRightmostSetBit(unsigned int num)
{
	return (num & -num);
}

```
These functions demonstrate how to perform basic operations on the bits of an integer using the bit manipulation operators in C.

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
- Vous êtes autorisé à utiliser [_putchar](https://github.com/hs-hq/_putchar.c/blob/main/_putchar.c)

# <p align="center">compilation commands for each task</p>

```
0. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
```

```
1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
```

```
2. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c
```

```
3. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
```

```
4. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
```

```
5. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
```
# <p align="center">Prototypes</p>
```
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
```

# <p align="center">Tutorials</p>

- [Bit manipulation](https://www.youtube.com/watch?v=glYr5m0Q0eA&ab_channel=CodingOverflow)

## ➤ License
Distributed under the MIT License.
See [LICENSE](https://www.holbertonschool.fr/) for more information.


## 🙇 Author
#### Stephanie Carvalho
- LinkedIn: [Stephanie C.rvalho](https://www.linkedin.com/in/stephanie-c-35582a13a/)
