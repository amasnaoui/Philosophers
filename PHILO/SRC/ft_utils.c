/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utiles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:14:26 by amasnaou          #+#    #+#             */
/*   Updated: 2022/11/09 09:53:39 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd (s, fd);
	write (fd, "\n", 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (!s)
		return ((void)0);
	while (s[++i])
		write (fd, &s[i], 1);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (0);
	}
	return (1);
}
