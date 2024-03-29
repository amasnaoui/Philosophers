/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:51:07 by amasnaou          #+#    #+#             */
/*   Updated: 2022/11/11 10:51:03 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int main(int ac, char **av)
{
	int	*args;

	if (ac < 5 || ac > 6)
		return (ft_putendl_fd("Error", 2), 1);
	args = (int *)malloc(sizeof(int) * (ac - 1));
	if (!args)
		return(1);
	if (ft_check_args(ac, av, args) == 1)
		return (ft_putendl_fd("Error", 2), free(args), 1);

	return 0;
}
