/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 19:28:02 by vlee              #+#    #+#             */
/*   Updated: 2018/04/16 20:28:30 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*result;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	result = ft_memalloc(ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	ft_strcpy(result, s);
	while (result[i])
	{
		result[i] = (*f)(result[i]);
		i++;
	}
	return (result);
}
