/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:48:14 by vlee              #+#    #+#             */
/*   Updated: 2018/02/27 17:48:19 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(int nbr)
{
  if (nbr < 0)
  {
    ft_putchar('-');
    ft_putnbr(-nbr);
  }
  else if (nbr > 9)
  {
    ft_putnbr(nbr / 10);
    ft_putnbr(nbr % 10);
  }
  else
  {
    ft_putchar(nbr + '0');
  }
}