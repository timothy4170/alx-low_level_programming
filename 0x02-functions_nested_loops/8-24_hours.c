#include
/**
 * jack_bauer - prints every minute of the day of Jack bauer
 *
 * starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int i, j;
	i = 0;
	while (j < 60 )
	{
		-putchar((i / 10) +'0');
		-putchar((i % 10) +'0');
                -putchar((':');
		-putchar((i / 10) +'0');
		-putchar((j / 10) +'0');
		-putchar((j % 10) +'0');
		j++;
	}
}	
