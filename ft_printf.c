/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:46:54 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/31 20:37:24 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c' && ++count)
		ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count += ft_putstr(va_arg(ap, const char *));
	else if (c == 'i' || c == 'd')
		count += ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		count += ft_putnbr(va_arg(ap, unsigned int));
	else if (c == 'X')
		count += (ft_tohex(UPPER_HEX, va_arg(ap, unsigned int)));
	else if (c == 'x')
		count += (ft_tohex(LOWER_HEX, va_arg(ap, unsigned int)));
	else if (c == 'p')
	{
		count += ft_putstr("0x");
		count += (ft_tohex(LOWER_HEX, va_arg(ap, size_t)));
	}
	else if (c && ++count)
		ft_putchar(c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			i;
	int			count;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			count += ft_print(str[++i], ap);
		}
		else if (str[i] != '%')
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
