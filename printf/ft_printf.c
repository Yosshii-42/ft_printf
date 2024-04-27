/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotsurud <yotsurud@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:28:05 by yotsurud          #+#    #+#             */
/*   Updated: 2024/04/27 13:37:11 by yotsurud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_select_conversion(va_list ap, const char character)
{
	int	count;

	count = 0;
	if (character == 'c')
		count = ft_put_c((char)va_arg(ap, int));
	else if (character == 's')
		count = ft_put_s((char *)va_arg(ap, char *));
	else if (character == 'p')
		count = ft_put_p((void *)va_arg(ap, void *));
	else if (character == 'd' || character == 'i')
		count = ft_put_di((int)va_arg(ap, int));
	else if (character == 'u' || character == 'x' || character == 'X')
		count = ft_put_uxx((unsigned int)va_arg(ap, unsigned int), character);
	else
		count = ft_put_c(character);
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	if (!fmt)
		return (-1);
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt != '%')
			count += ft_put_c(*fmt);
		else if (*fmt == '%')
		{
			count += ft_select_conversion(ap, *(fmt + 1));
			fmt++;
		}	
		fmt++;
	}
	va_end(ap);
	return (count);
}
