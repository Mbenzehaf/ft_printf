/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 01:11:28 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/31 20:12:08 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(long nbr)
{
	long long	n;
	int			sign;

	n = nbr;
	sign = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		sign++;
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
		return (1 + sign);
	}
	else
	{
		return (ft_putnbr(n / 10) + ft_putnbr(n % 10) + sign);
	}
	return (0);
}
