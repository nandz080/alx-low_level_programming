/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _islower(int c);

int _putchar(char);

int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
