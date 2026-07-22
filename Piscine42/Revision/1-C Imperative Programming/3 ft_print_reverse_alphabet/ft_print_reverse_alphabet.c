/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 10:08:20 by aselva            #+#    #+#             */
/*   Updated: 2026/07/15 10:12:58 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet()
{
	write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
