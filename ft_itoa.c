/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:58:27 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/05 17:26:03 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_calc10(int n, int *len)
{
	int	qtt10;
	int	ext;

	ext = 0;
	qtt10 = 1;
	while (qtt10 <= n && ext == 0)
	{
		if (qtt10 < 1000000000)
		{
			qtt10 *= 10;
			(*len)++;
		}
		else
		{
			ext = 1;
			(*len)++;
		}
	}
	if (ext == 0)
		qtt10 = qtt10 / 10;
	return (qtt10);
}

static int	ft_isnegative(int  *n, char *str, int *len)
{
	*len = 0;
	if (*n < 0 && *n != -2147483648)
	{
		*n *= -1;
		*len = 1;
	}
	return(*len);
}

static void	ft_fillstring(char *str, int qtt10, int neg, int n)
{
	int	i;

	i = neg;
	while (1 <= qtt10)
	{
		str[i] = (n / qtt10) + '0';
		n = n % qtt10;
		qtt10 = qtt10 / 10;
		i++;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		qtt10;
	int		neg;

	if (n == -2147483648)
	{
		str = malloc(12 * sizeof(char));
		str = "-2147483648";
	}
	neg = ft_isnegative(&n, str, &len);
	if (n >= 0)
	{
		qtt10 = ft_calc10(n, &len);
		if (neg == 1)
		{
			str = malloc((len + 1) * sizeof(char));
			str[0] = '-';
		}
		else
			str = malloc(len * sizeof(char));
		if (!str)
			return (NULL);
		ft_fillstring(str, qtt10, neg, n);
	}
	return (str);
}

#include <stdio.h>

int main()
{
	printf("%s",ft_itoa(202));
}
