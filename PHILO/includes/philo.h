#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <pthread.h>
# include <stdlib.h>

//Utils
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_isdigit(int c);
// int		ft_isspace(const char *str);
int		ft_atoi(char *str);

#endif
