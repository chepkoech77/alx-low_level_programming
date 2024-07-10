#include "main.h"
/**
 * wildcmp - Compres two strings
 * @s1: first string
 * @s2: Second string
 *
 * Return: 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
