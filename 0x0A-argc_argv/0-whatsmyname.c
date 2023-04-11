/**
 * main - prints the name of the program
 *
 * @argc: the number of command line arguments
 * @argv: an array containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; argv[0][i] != '\0'; i++)
{
putchar(argv[0][i]);
}
putchar('\n');

return (0);
}
