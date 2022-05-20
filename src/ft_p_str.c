/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:26:08 by bjimenez          #+#    #+#             */
/*   Updated: 2022/05/20 13:27:53 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int	ft_p_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
