#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int lenstr, int checker);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 **/
int find_strlen(char *s)
{
	int lenstr = 0;

	if (*(s + lenstr))
	{
		lenstr++;
		lenstr += find_strlen(s + lenstr);
	}

	return (lenstr);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @lenstr: The length of s.
 * @checker: The num of times the string to be checked.
 * Return: 1
 **/
int check_palindrome(char *s, int lenstr, int checker)
{
	if (s[checker] == s[lenstr / 2])
		return (1);

	if (s[checker] == s[lenstr - checker - 1])
		return (check_palindrome(s, lenstr, checker + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * Return: 1
 **/
int is_palindrome(char *s)
{
	int checker = 0;
	int lenstr = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, lenstr, checker));
}
