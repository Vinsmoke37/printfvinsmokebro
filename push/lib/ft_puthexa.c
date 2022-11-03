/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:17:54 by aerraoui          #+#    #+#             */
/*   Updated: 2022/11/03 00:39:05 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_puthexa(unsigned int a, char x)
{
	char			*b;
	unsigned int	c ;
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
	if (x == 'x')
		b = "0123456789abcdef";
	else if (x == 'X')
		b = "0123456789ABCDEF";
	if (a < 16)
		ft_putchar(b[a]);
	else
	{
		ft_puthexa(a / 16, x);
		ft_puthexa(a % 16, x);
	}
	return (k);
}
