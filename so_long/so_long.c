/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallahi <asallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:58:07 by asallahi          #+#    #+#             */
/*   Updated: 2022/04/24 22:24:50 by asallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_map	map;
	t_list	*root;
	t_all	all;

	root = NULL;
	all.map = &map;
	all.root = root;
	reset_map(&map);
	if (ac == 2 && check_name(av[1]))
	{
		read_line(av[1], &all);
		render(&all);
	}
}
