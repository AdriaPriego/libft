/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:51:52 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 22:51:52 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strlcat(char *dst, const char *src, int dstsize)
{
	int	ldst;
	int	lsrc;
	int	cont;
    int i;

    i = 0;
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (dstsize <= ldst)
		return (lsrc + dstsize);
	cont = ldst;
	while (src[i] != '\0' && cont < (dstsize - 1))
    {
        dst[cont] = src[i];
        i++;
    }
	dst[cont] = '\0';
	return (ldst + lsrc);
}
