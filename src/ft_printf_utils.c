/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:39:39 by bjimenez          #+#    #+#             */
/*   Updated: 2022/05/20 20:46:08 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hex(unsigned int n, char c)
{
	unsigned int	r;
	char			*cad;
	int				n_char;

	n_char = 0;
	if (c == 'x')
		cad = "0123456789abcdef";
	else if (c == 'X')
		cad = "0123456789ABCDEF";
	if (n < 16)
	{
		write(1, &cad[n], 1);
		n_char++;
	}
	if (n >= 16)
	{	
		r = n % 16;
		n = n / 16;
		n_char += ft_hex(n, c);
		write(1, &cad[r], 1);
		n_char++;
	}
	return (n_char);
}

int	ft_put_unbr(unsigned int n)
{
	char	q;
	int		n_char;

	n_char = 0;
	if (n >= 10 && n <= 4294967295)
	{
		n_char += ft_put_unbr(n / 10);
		q = (n % 10) + '0';
		write(1, &q, 1);
		n_char++;
	}
	else if (n < 10)
	{
		q = n + '0';
		write(1, &q, 1);
		n_char++;
	}
	return (n_char);
}

int	ft_dirptr(unsigned long long p)
{
	unsigned long long	r;
	char				*cad;
	int					n_char;

	cad = "0123456789abcdef";
	n_char = 0;
	if (p < 16)
	{
		write(1, "0x", 2);
		write(1, &cad[p], 1);
		n_char = n_char + 3;
	}
	if (p >= 16)
	{	
		r = p % 16;
		p = p / 16;
		n_char += ft_dirptr(p);
		write(1, &cad[r], 1);
		n_char++;
	}
	return (n_char);
}
