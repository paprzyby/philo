/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:06:09 by paprzyby          #+#    #+#             */
/*   Updated: 2024/08/16 14:28:13 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	error(char *message, t_data *list)
{
	if (list)
		free(list);
	printf("Error\n");
	printf("%s", message);
	exit(1);
}

int	main(int ac, char **av)
{
	t_data	*list;
	int		i;

	list = malloc(sizeof(t_data));
	i = 0;
	if (ac != 5 && ac != 6)
		return (error("Wrong number of arguments passed\n", list));
	while (++i < ac)
		param_check(av[i], i, list);
	init(list);
	return(0);
}

//free list
//free philo