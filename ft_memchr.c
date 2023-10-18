/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:47 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 13:18:25 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
	}
	return (NULL);
}
/*
int main()
{
	const char *str;
	int chartofind;
	size_t n;
	
	str = "Hello, world!";
	n = 13;
	chartofind = 'o';
	void *result = ft_memchr(str, chartofind, n);
	if (result != NULL)
	{
		printf("El carácter '%c' se encontró en la posición %ld\n", chartofind,
				(long)((char *)result - str));
    }
	else
	{
		printf("El carácter '%c' no se encontró.\n", chartofind);
	}
	return (0);
}*/
