/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdavi-al <sdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:03:17 by sdavi-al          #+#    #+#             */
/*   Updated: 2024/10/28 21:58:10 by sdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formatspc(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}

// # include <stddef.h>
// # include <stdlib.h>
// # include <stdio.h>
// # include <unistd.h>
// # include <stdarg.h>

// int	main(void)
// {
// 	int num = 2;
// 	int *number = &num;

// 	void *ptr = NULL;

// 	ft_printf(" NULL %s NULL \n", NULL);
// 	printf(" NULL %s NULL ", NULL);

// 	return (0);
// }
