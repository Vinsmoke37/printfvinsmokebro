/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:33:07 by aerraoui          #+#    #+#             */
/*   Updated: 2022/11/03 00:39:10 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_putchar(char c)
{
	int	i;

	i = 0;
	write(1, &c, 1);
	i++;
	return (i);
}
