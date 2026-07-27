/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 14:03:04 by aselva            #+#    #+#             */
/*   Updated: 2026/07/10 10:53:37 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/* #include <stdio.h>
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 5;
	ft_swap(&num1, &num2);
	printf("%d\n", num1);
	printf("%d\n", num2);
	return (0);
}*/
