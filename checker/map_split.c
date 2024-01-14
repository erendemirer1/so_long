/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:11:15 by edemirer          #+#    #+#             */
/*   Updated: 2024/01/14 05:55:16 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "../libft/libft.h"
#include <fcntl.h>
#include <stdlib.h>

void	map_split(t_map *map)
{
	int		fd;
	char	*join;

	fd = open(map->ber, O_RDONLY);
	if (fd < 0)
		return (write(2, "Dosya okunamiyor!\n", 19), exit(1));
	map->line = get_next_line(fd);
	if (!map->line)
		return (write(2, "Bos Harita!!\n", 14), exit(1));
	map->join = NULL;
	while (map->line)
	{
		join = ft_strjoin(map->join, map->line);
		free(map->line);
		free(map->join);
		map->join = ft_strdup(join);
		free(join);
		map->line = get_next_line(fd);
	}
	map->mav = ft_split(map->join, '\n');
	map->virtual_map = ft_split(map->join, '\n');
	if (!map->mav || !map->virtual_map)
		return (write(2, "Map olusturulamiyor\n", 21), exit(1));
	map->height = wc(map->join, '\n');
	free(map->join);
}
