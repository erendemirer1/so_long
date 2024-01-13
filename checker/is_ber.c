/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ber.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:11:07 by edemirer          #+#    #+#             */
/*   Updated: 2024/01/13 19:45:29 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "../libft/libft.h"

void	is_ber(char **av, t_map *map)
{
	map->ber = av[1];
	if (ft_strncmp(av[1] + ft_strlen(av[1]) - 4, ".ber", 5))
		return (write(2, "Bu bir .ber dosyasi degil!\n", 28), exit(1));
}
