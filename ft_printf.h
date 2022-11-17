/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:40:26 by mben-zeh          #+#    #+#             */
/*   Updated: 2022/10/30 18:40:31 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define UPPER_HEX "0123456789ABCDEF"
# define LOWER_HEX "0123456789abcdef"

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(int c);
int		ft_putstr(const char *str);
int		ft_putnbr(long nbr);
int		ft_tohex(const char *base, size_t n);

#endif
