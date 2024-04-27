/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_and_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotsurud <yotsurud@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:37:43 by yotsurud          #+#    #+#             */
/*   Updated: 2024/04/27 13:40:36 by yotsurud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_c(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_put_s(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (ft_strlen("(null)"));
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_put_p(void *ptr)
{
	int				count;
	unsigned long	nbr;

	nbr = (unsigned long)ptr;
	ft_putstr_fd("0x", 1);
	count = 2;
	ft_putnbr_base_fd(nbr, HEX_LOW, 1, &count);
	return (count);
}

int	ft_put_di(int nbr)
{
	int	count;

	count = 0;
	ft_putnbr_fd(nbr, 1);
	if (nbr <= 0)
		count++;
	while (nbr != 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

int	ft_put_uxx(unsigned long nbr, char format)
{
	int	count;

	count = 0;
	if (format == 'u')
		ft_putnbr_base_fd(nbr, DECIMAL, 1, &count);
	if (format == 'x')
		ft_putnbr_base_fd(nbr, HEX_LOW, 1, &count);
	if (format == 'X')
		ft_putnbr_base_fd(nbr, HEX_UP, 1, &count);
	return (count);
}
