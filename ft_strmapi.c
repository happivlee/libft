/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 18:11:07 by vlee              #+#    #+#             */
/*   Updated: 2018/03/26 18:11:16 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	int i;
	char *result;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	result = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	ft_strcpy(result, s);
	while (result[i])
	{
		result[i] = (*f)(i, result[i]);
		i++;
	}
	return (result);
}
