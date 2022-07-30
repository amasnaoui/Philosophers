/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <amasnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:51:07 by amasnaou          #+#    #+#             */
/*   Updated: 2022/07/29 13:02:48 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void *routine()
{
	printf("Test thread\n");
	sleep(3);
	printf("end thread\n");
	return(0);
}

int main()
{
	pthread_t t1;
	pthread_t t2;

	pthread_create(&t1,NULL, &routine, NULL);
	pthread_create(&t2,NULL, &routine, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return 0;
}
