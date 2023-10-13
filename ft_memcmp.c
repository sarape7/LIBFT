/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:49:56 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 09:50:23 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = s1;
	const unsigned char	*p2 = s2;

	while (n-- > 0)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}
/*
int	main()
{
	const char str1[] = "Hello, world!";
	const char str2[] = "Hello, universe!";
	size_t n = 13;
	int	result = ft_memcmp(str1, str2, n);
	if (result == 0)
	{
		printf("Las primeras %zu bytes de str1 y str2 son iguales.\n", n);
	}
	else if (result < 0)
	{
		printf("Las primeras %zu bytes de str1 son menores que str2.\n", n);
	}
	else
	{
		printf("Las primeras %zu bytes de str1 son mayores que str2.\n", n);
	}
	return (0);
}*/
