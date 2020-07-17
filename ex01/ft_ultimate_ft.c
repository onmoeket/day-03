/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onmoeket <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:34:08 by onmoeket          #+#    #+#             */
/*   Updated: 2020/07/17 09:34:10 by onmoeket         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}


void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
