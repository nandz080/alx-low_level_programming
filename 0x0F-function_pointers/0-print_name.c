/**
 * print_name - function that prints a name.
 *
 * @name: name to print
 * @f: function void pointer
 *
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
