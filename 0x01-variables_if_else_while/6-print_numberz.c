/**
 * main - main code block
 *
 * Return: 0 always
 *
 */

int main(void)
{
        int num;

        for (num = 0; num < 10; num++)
        {
                putchar((num % 10) + '0');
        }
	putchar('\n');
	return (0);
}