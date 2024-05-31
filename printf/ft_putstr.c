/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:36:58 by saandria          #+#    #+#             */
/*   Updated: 2024/03/09 14:13:56 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *len)
{
	if (!s)
	{
		*len += 6;
		write(1, "(null)", 6);
	}
	else
		while (*s)
			ft_putchar(*s++, len);
}
