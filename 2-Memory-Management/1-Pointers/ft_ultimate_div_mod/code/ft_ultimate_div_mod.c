/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 17:45:13 by aselva            #+#    #+#             */
/*   Updated: 2026/07/10 10:56:50 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*#include <stdio.h>
int	main(void)
{
	int	k;
	int	o;

	k = 16;
	o = 12;
	ft_ultimate_div_mod(&k, &o);
	printf("%d", k);
	printf("%d", o);
	return (0);
}*/
