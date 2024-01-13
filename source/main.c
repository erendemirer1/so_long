/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 02:40:08 by edemirer          #+#    #+#             */
/*   Updated: 2024/01/13 19:46:30 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "../libft/libft.h"
#include "../minilibx/mlx.h"

void	exitt(t_map *map)
{
	free_malloc(map->mav, 0);
	free_malloc(map->virtual_map, 0);
	if (map->win)
		mlx_destroy_window(map->ptr, map->win);
	exit(1);
}

void	init(t_map *map)
{
	map->c_cont = 0;
	map->e_cont = 0;
	map->p_cont = 0;
	map->ctrl_c_cont = 0;
	map->door_accessible = 0;
	map->number_of_steps = 0;
}

int	main(int ac, char **av)
{
	t_map	map;

	if (ac != 2)
		return (write(1, "Arguman sayisi 2 değil!\n", 8), 0);
	init(&map);
	checker(av, &map);
	so_long(&map);
}
