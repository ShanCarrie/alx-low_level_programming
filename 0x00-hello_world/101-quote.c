#include <unistd.h>
/**
 * main - runs the statement in it
 *
 * Return: 0 to exit the function
 */
int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 59);
return (1);
