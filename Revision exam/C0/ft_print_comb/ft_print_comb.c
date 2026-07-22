#include <unistd.h>

void ft_put(int a, int b , int c)
{
	if (a < b && b < c)
	{	
		write(1, &a ,1);
        	write(1, &b ,1);
        	write(1, &c ,1);
        	if (a != '7' || b != '8' || c != '9')
        	{
	        	write(1, ", ",2);
        	}
	}
}

void ft_print_comb(void)
{
	int	(a) = '0';
	int 	(b) = '0';
	int	(c) = '0';

	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_put(a, b, c);
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
}

int main(void)
{
	ft_print_comb();
	return(0);
}
