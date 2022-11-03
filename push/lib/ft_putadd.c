/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:33:42 by aerraoui          #+#    #+#             */
/*   Updated: 2022/11/03 00:31:43 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static void	ft_hexa( unsigned long a)
{
	char	*b;

	b = "0123456789abcdef";
	if (a < 16)
	{
		ft_putchar(b[a]);
	}
	else
	{
		ft_hexa(a / 16);
		ft_hexa(a % 16);
	}
}

static int	ft_count(unsigned long a)
{
	unsigned long	c ;
	int				k;

	k = 0;
	c = a;
	if (c == 0)
		k++;
	while (c != 0)
	{
		c = c / 16;
		k++;
	}
	return (k);
}

int	ft_putadd(void *a)
{
	unsigned long	c;

	c = (unsigned long)a;
	write(1, "0x", 2);
	ft_hexa(c);
	return (ft_count(c)+2);
}
