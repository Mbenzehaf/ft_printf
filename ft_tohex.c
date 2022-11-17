/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:25:26 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/31 20:37:48 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_tohex(const char *base, size_t n)
{
	if (n < 16)
	{
		ft_putchar(base[n]);
		return (1);
	}
	else
	{
		return (ft_tohex(base, n / 16) + ft_tohex(base, n % 16));
	}
	return (0);
}
