/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:43:34 by aerraoui          #+#    #+#             */
/*   Updated: 2022/11/03 00:38:41 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_putuns(unsigned int a)
{
	char	*p;
	int		c;

	p = ft_itoa(a);
	c = ft_strlen(p);
	write(1, p, ft_strlen(p));
	free(p);
	return (c);
}
