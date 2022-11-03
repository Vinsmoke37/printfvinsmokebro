/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:54:46 by aerraoui          #+#    #+#             */
/*   Updated: 2022/11/03 00:31:50 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static void	ft_rev_int_tab(char *tab, int size)
{
	int	i;
	int	storage;

	i = 0;
	while (i < size)
	{
		storage = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = storage;
		i++;
		size--;
	}
}

static int	nbrar9am(long a)
{
	int	i;

	if (a == 0)
		return (1);
	i = 0;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

static char	*allocinsert1(char *p, int k, int check, long a)
{
	int	i;

	i = 0;
	if (check)
		p[i++] = '-';
	while (i < k)
	{
		p[i++] = a % 10 + 48;
		a = a / 10;
	}
	p[k] = '\0';
	return (p);
}

static void	rev(char *tab, int check, int k)
{
	if (check)
		ft_rev_int_tab((tab + 1), (k - 1));
	else
		ft_rev_int_tab(tab, k);
}

char	*ft_itoa( long a)
{
	int		i ;
	long	c;
	int		k;
	char	*p;
	int		check;

	c = (long)a;
	i = 0;
	check = 0;
	if (c < 0)
	{
		check = 1;
		c *= -1;
	}
	k = nbrar9am(c);
	if (check)
		k = k + 1;
	p = malloc((k + 1) * sizeof(char));
	if (!p)
		return (0);
	p = allocinsert1(p, k, check, c);
	rev (p, check, k);
	return (p);
}
