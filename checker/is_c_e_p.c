/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_c_e_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:11:09 by edemirer          #+#    #+#             */
/*   Updated: 2024/01/13 15:43:20 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include <unistd.h>

void	is_c_e_p(t_map *map)
{
	int	y;
	int	x;

	y = -1;
	while (++y < map->height)
	{
		x = -1;
		while (++x < map->width)
		{
			if (map->mav[y][x] == 'C')
				map->c_cont++;
			else if (map->mav[y][x] == 'E')
				map->e_cont++;
			else if (map->mav[y][x] == 'P')
			{
				map->p_cont++;
				map->p_loc[0] = x;
				map->p_loc[1] = y;
			}
		}
	}
	if (map->c_cont <= 0 || map->e_cont != 1 || map->p_cont != 1)
		return (write(2, "C_E_P Hatasi\n", 14), exitt(map));
}
