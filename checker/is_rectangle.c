/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rectangle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:11:13 by edemirer          #+#    #+#             */
/*   Updated: 2024/01/13 19:39:39 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "../libft/libft.h"

void	is_rectangle(t_map *map)
{
	int	i;
	int	j;

	map->width = (int)ft_strlen(map->mav[0]);
	i = -1;
	while (map->mav[++i])
	{
		if (map->width != (int)ft_strlen(map->mav[i]))
			return (write(2, "Harita dikdortgen degil!!\n", 27), exitt(map));
		j = -1;
		if (!i || i == map->height - 1)
		{
			while (map->mav[i][++j])
				if (map->mav[i][j] != '1')
					return (write(2, "Harita kapali degil\n", 21), exitt(map));
		}
		else if (map->mav[i][0] != '1' || map->mav[i][map->width - 1] != '1')
			return (write(2, "Harita kapali degil\n", 21), exitt(map));
	}
}
