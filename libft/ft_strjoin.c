/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 01:29:53 by edemirer          #+#    #+#             */
/*   Updated: 2024/01/13 19:45:50 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	char	*str;

	if (!s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	x = ft_strlen(s1);
	y = ft_strlen(s2) + 1;
	str = (char *)malloc(x + y);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, x + 1);
	ft_strlcpy(str + x, s2, y);
	return (str);
}
