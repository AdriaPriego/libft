/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:47:24 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/02 14:19:39 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (ft_islower(c) == 1)
		return (c - 32);
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("%d-", 'a'-'A');
	printf("%c-", ft_toupper('a'));
	printf("%c", toupper('a'));
}
*/