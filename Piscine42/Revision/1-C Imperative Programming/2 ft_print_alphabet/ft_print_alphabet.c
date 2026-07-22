/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 09:57:23 by aselva            #+#    #+#             */
/*   Updated: 2026/07/15 10:07:37 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_alphabet()
{
	/*
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27); // 1ere possibilite

	write(1, "abcdefghijklmnopqrstuvwxyz", 26); // 2e possibilite
	write(1, "\n", 1); */ 

	char	c; // 3e possibilite

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
