/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:49:39 by amasnaou          #+#    #+#             */
/*   Updated: 2022/11/11 10:55:48 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int ft_check_args(int ac, char **av, int *args)
{
	int	i;
	int	j;

	i = 1;
	while (--ac)
	{
		j = 0;
		if (av[i][j] == '\0' || av[i][j] == '-')
			return (1);
		if (av[i][j] == '+' && av[i][j + 1] != '\0')
			j++;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 1)
				return (1);
			j++;
		}
		args[i - 1] = ft_atoi(av[i]);
		i++;
	}
	if (args[0] == 0)
		return (1);
	return (0);
}
