#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int (i) = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);

}

int main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
