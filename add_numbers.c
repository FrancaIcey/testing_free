#include <stdio.h>
#include "main.h"

/**
 * add_numbers - A function to add two numbers.
 * @a: First number to be added.
 * @b: Second number to be added.
 *
 * Return: Sum of two numbers
 */
int add_numbers(int a, int b)
{
	return (a + b);
}

/**
 * main - The entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int num1, num2, sum;

	num1 = 3;
	num2 = 5;

	sum = add_numbers(num1, num2);

	printf("The sum of %d and %d is: %d\n", num1, num2, sum);

	return (0);
}
