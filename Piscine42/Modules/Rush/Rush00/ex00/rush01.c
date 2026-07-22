/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 10:00:31 by aselva            #+#    #+#             */
/*   Updated: 2026/07/05 15:11:29 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_line(int x)

{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('/');
		}
		else if (i == x - 1)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_last_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('\\');
		}
		else if (i == x - 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_midd_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_rush(int x, int y)
{
	int	j;

	j = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (j < y)
	{
		if (j == 0)
		{
			ft_first_line(x);
		}
		else if (j == y - 1)
		{
			ft_last_line(x);
		}
		else
		{
			ft_midd_line(x);
		}
		j++;
	}
}
