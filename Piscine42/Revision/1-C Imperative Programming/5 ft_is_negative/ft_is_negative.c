/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 10:18:14 by aselva            #+#    #+#             */
/*   Updated: 2026/07/15 10:22:16 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else 
	{
		write(1, "P", 1);
	}
}

int	main()
{
	ft_is_negative(8);
	ft_is_negative(0);
	ft_is_negative(-5);
	return (0);
}
