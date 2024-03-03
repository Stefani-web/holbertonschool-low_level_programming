#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: pointer
 *
 * Return: num * signe
 */

int _atoi(char *s)
{
	int signe = 1;
	unsigned int num = 0;

	do {
