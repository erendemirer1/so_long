/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:11:11 by edemirer          #+#    #+#             */
/*   Updated: 2024/01/13 15:43:27 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include <unistd.h>

void	path_finder(t_map *map, int x, int y)
{
	if (map->virtual_map[y][x] == '1')
		return ;
	else if (map->virtual_map[y][x] == 'C')
		map->ctrl_c_cont++;
	else if (map->virtual_map[y][x] == 'E')
		map->door_accessible = 1;
	else if (map->virtual_map[y][x] != 'P' && map->virtual_map[y][x] != '0')
		return (write(2, "C_E_P Hatasi\n", 14), exitt(map));
	map->virtual_map[y][x] = '1';
	path_finder(map, x - 1, y);
	path_finder(map, x, y - 1);
	path_finder(map, x + 1, y);
	path_finder(map, x, y + 1);
}

void	is_game(t_map *map)
{
	path_finder(map, map->p_loc[0], map->p_loc[1]);
	if (map->ctrl_c_cont != map->c_cont)
		return (write(2, "Coin ulasilamaz!\n", 23), exitt(map));
	if (!map->door_accessible)
		return (write(2, "Kapi ulasilamaz!\n", 27), exitt(map));
}
