#include "main.h"

/**
 * look_for_prime - loops through div for prime match
 * @n: number for calculation
 * @div: divisor
 *
 * Return: 1 if prime, else 0
 */

int look_for_prime(int n, int div)
{
	if (n <= 1)
		return (0);

	if (div == 1)
		return (1);

	if (n % div == 0)
		return (0);

	return (look_for_prime(n, div - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number being checked
 *
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 2)
		return (0);

	return (look_for_prime(n, n - 1));
}
