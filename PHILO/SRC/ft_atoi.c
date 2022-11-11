/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:56:56 by amasnaou          #+#    #+#             */
/*   Updated: 2022/11/09 10:54:23 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

// int	ft_isspace(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
// 		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// int	ft_atoi(const char *str)
// {
// 	int					sign;
// 	int					i;
// 	unsigned long long	num;

// 	sign = 1;
// 	num = 0;
// 	i = ft_isspace(str);
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign *= -1;
// 		i++;
// 	}
// 	while (str[i] && ft_isdigit(str[i]))
// 	{
// 		num = num * 10 + (str[i++] - '0');
// 		if (num > 9223372036854775807)
// 		{
// 			if (sign > 0)
// 				return (-1);
// 			else
// 				return (0);
// 		}
// 	}
// 	return (sign * num);
// }

int	ft_atoi(char *str)
{
	int		j;
	long	nb;
	long	f;

	j = 0;
	nb = 1;
	f = 0;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n'
		|| str[j] == '\r' || str[j] == '\v' || str[j] == '\f')
		j++;
	if (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			nb *= -1;
		j++;
	}
	while (str[j] >= '0' && str[j] <= '9')
	{
		f = (f * 10) + str[j] - 48;
		j++;
	}
	return (f * nb);
}
