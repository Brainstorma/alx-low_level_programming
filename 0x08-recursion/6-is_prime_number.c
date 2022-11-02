#include "main.h"

int optimus_prime(int n, int prime_num);
int is_prime_number(int n);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 * Return: 1 for prime number
 **/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (optimus_prime(n, n - 1));
}
/**
 * optimus_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @prime_num: iterator
 * Return: prime num
 **/

int optimus_prime(int n, int prime_num)
{
	if (prime_num == 1)
		return (1);
	if (n % prime_num == 0 && prime_num > 0)
		return (0);
	return (optimus_prime(n, prime_num - 1));
}
