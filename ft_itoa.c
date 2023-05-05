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
	*len = 0;
	while (qtt10 <= n && ext == 0)
	{
		if (qtt10 < 1000000000)
		{
			qtt10 *= 10;
			(*len)++;
		}
		else
			ext = 1;
	}
	if (ext == 0)
	{
		qtt10 = qtt10 / 10;
	}
	return (qtt10);
}

static int	ft_isnegative(int n)
{
	if (n < 0 && n != INT32_MIN)
	{
		n *= -1;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	int		qtt10;

	n = ft_isnegative(n);
	qtt10 = ft_calc10(n, &len);
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (n / qtt10) + '0';
		n = n % qtt10;
		qtt10 = qtt10 / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

int main()
{
	printf("%s",ft_itoa(100));
}*/