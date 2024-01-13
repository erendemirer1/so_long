/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:11:02 by edemirer          #+#    #+#             */
/*   Updated: 2024/01/13 00:11:03 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	checker(char **av, t_map *map)
{
	is_ber(av, map);
	map_split(map);
	is_rectangle(map);
	is_c_e_p(map);
	is_game(map);
}
