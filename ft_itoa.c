/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 17:53:58 by vlee              #+#    #+#             */
/*   Updated: 2018/04/16 19:48:10 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int		count;
	long	ln;

	ln = (long)n;
	count = 1;
	if (ln < 0)
	{
		ln = -ln;
		count++;
	}
	while (ln > 9)
	{
		ln = ln / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*result;
	int		count;
	long	ln;

	ln = (long)n;
	count = ft_count_digits(ln);
	result = ft_strnew(count);
	if (!result)
		return (NULL);
	if (ln == 0)
		result[0] = '0';
	if (ln < 0)
	{
		ln = -ln;
		result[0] = '-';
	}
	while (ln != 0)
	{
		result[count - 1] = ln % 10 + '0';
		ln = ln / 10;
		count--;
	}
	return (result);
}
