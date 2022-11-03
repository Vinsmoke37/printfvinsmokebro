/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:30:12 by aerraoui          #+#    #+#             */
/*   Updated: 2022/11/03 00:31:17 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIB_H
# define LIB_H

# include <stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include <fcntl.h>
# include<strings.h>
# include<limits.h>
# include<stdarg.h>

char	*ft_itoa( long a);
size_t	ft_strlen(const char *str);
int		ft_putstr(char *s);
int		ft_putnbr(int a);
int		ft_putchar(char c);
int		ft_puthexa(unsigned int a, char c);
int		ft_putadd(void *p);
int		ft_putuns(unsigned int a);

#endif