/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 01:30:11 by edemirer          #+#    #+#             */
/*   Updated: 2024/01/13 01:30:12 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**free_malloc(char **tab, int i);
int		wc(char const *s, char c);
char	**ft_split(char const *s, char c);

//GET_NEXT_LINE
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 13
# endif

char	*get_next_line(int fd);
char	*get_next_line_bonus(int fd);

//printf
int		ft_printf(const char *str, ...);
int		ft_int(int w);
int		ft_unsigned(unsigned int w);
int		ft_hex(unsigned int d, char w);
int		ft_point(unsigned long w, int i);
int		ft_string(char *str);
int		ft_check(char str);
int		ft_putchar(char x);
int		ft_format(va_list *args, char w);

#endif
