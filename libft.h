/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:17:51 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 14:52:26 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void	*ft_memmove(void *dest, const void *src, int count);
void	*ft_bzero(void *s, int n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *str, int c, int n);
void	*ft_memcpy(void *dest, const void *src, int count);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t	dstsize);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *buffer1, const void *buffer2, size_t count);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif