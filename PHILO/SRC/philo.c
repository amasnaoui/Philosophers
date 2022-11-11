/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:51:07 by amasnaou          #+#    #+#             */
/*   Updated: 2022/11/11 10:46:25 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"



int check_args(int ac, char **av, int *args)
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
		return (free(args), 1);
	return (0);
}

int main(int ac, char **av)
{
	int	*args;

	if (ac < 5 || ac > 6)
		return (ft_putendl_fd("Error", 2), 1);
	args = (int *)malloc(sizeof(int) * (ac - 1));
	if (!args)
		return(1);
	if (check_args(ac, av, args) == 1)
		return (ft_putendl_fd("Error", 2), free(args), 1);

	return 0;
}
