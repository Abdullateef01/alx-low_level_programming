#include <unistd.h>

/**
 * main - entry point of the program
 * print string to standard error with fprintf function
 * Return: return 1 for main
 */
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	59);
	return (1);
}
