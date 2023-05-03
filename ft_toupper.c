/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apriego- <apriego-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:47:24 by apriego-          #+#    #+#             */
/*   Updated: 2023/05/03 11:50:34 by apriego-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
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