/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:52:28 by bjimenez          #+#    #+#             */
/*   Updated: 2022/05/20 13:15:55 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_p_str(char *str);
int		ft_p_id(int n);
int		ft_p_char(int c);
int		ft_hex(unsigned int n, char c);
int		ft_put_unbr(unsigned int n);
int		ft_dirptr(unsigned long long p);

int	ft_sel_type(char type, va_list pf)
{
	int	n_char;

	n_char = 0;
	if (type == 'c')
		n_char += ft_p_char(va_arg(pf, int));
	else if (type == 'i' || type == 'd')
		n_char += ft_p_id(va_arg(pf, int));
	else if (type == 's')
		n_char += ft_p_str(va_arg(pf, char *));
	else if (type == 'u')
		n_char += ft_put_unbr(va_arg(pf, unsigned int));
	else if (type == 'x')
		n_char += ft_hex(va_arg(pf, unsigned int), 'x');
	else if (type == 'X')
		n_char += ft_hex(va_arg(pf, unsigned int), 'X');
	else if (type == 'p')
		n_char += ft_dirptr(va_arg(pf, unsigned long long));
	else if (type == '%')
	{
		write(1, "%", 1);
		n_char = 1;
	}
	va_end(pf);
	return (n_char);
}

int	ft_printf(char const *type, ...)
{
	int		c_printed;
	va_list	pf;

	va_start(pf, type);
	c_printed = 0;
	while (*type != '\0')
	{
		if (*type == '%')
		{
			type++;
			c_printed += ft_sel_type(*type, pf);
		}
		else
		{
			write(1, &(*type), 1);
			c_printed++;
		}
		type++;
	}
	va_end(pf);
	return (c_printed);
}
