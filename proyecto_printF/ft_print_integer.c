/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngibelli <ngibelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:30:05 by ngibelli          #+#    #+#             */
/*   Updated: 2024/10/07 19:55:15 by ngibelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_number(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_print_char('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_print_number(n / 10);
	count += ft_print_char(n % 10 + '0');
	return (count);
}

int	ft_print_integer(int n)
{
	return (ft_print_number((long)n));
}
