/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdavi-al <sdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:04:30 by sdavi-al          #+#    #+#             */
/*   Updated: 2024/10/28 22:09:42 by sdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printchar(char c)
{
	return (write(1, &c, 1));
}

size_t	ft_printstr(const char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (write (1, "(null)", 6));
	while (str[len])
		ft_printchar(str[len++]);
	return (len);
}

int	num_length(int num)
{
	int	length;

	length = 0;
	if (num <= 0)
		length = 1;
	while (num != 0)
	{
		num /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	long	num;
	int		length;
	char	*str;

	num = (long)n;
	length = num_length(num);
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	else if (num == 0)
		str[0] = '0';
	length--;
	while (num > 0)
	{
		str[length] = (num % 10) + '0';
		num /= 10;
		length--;
	}
	return (str);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*str;

	str = ft_itoa(n);
	len = ft_printstr(str);
	free(str);
	return (len);
}
