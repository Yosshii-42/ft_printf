/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotsurud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:42:00 by yotsurud          #+#    #+#             */
/*   Updated: 2024/04/27 13:39:37 by yotsurud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_fd(unsigned long nbr, char *base, int fd, int *count)
{
	unsigned long		base_len;

	base_len = (unsigned long)ft_strlen(base);
	if (nbr >= base_len)
		ft_putnbr_base_fd(nbr / base_len, base, fd, count);
	ft_putchar_fd(base[nbr % base_len], fd);
	(*count)++;
}
