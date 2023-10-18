/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:13:21 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 13:18:46 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
	{
		return (dest);
	}
	if (d < s || d >= s + n)
	{
		*d = *s;
		ft_memmove(d + 1, s + 1, n - 1);
	}
	else
	{
		ft_memmove(d + n - 1, s + n - 1, 1);
		ft_memmove(d, s, n - 1);
	}
	return (dest);
}
/*
int main()
{
	char source[] = "Hello, world!";
	char destination[20];
	size_t n = 13;
	ft_memmove(destination, source, n);
	printf("Cadena de destino (ft_memmove): %s\n", destination);
	char destination_std[20];
	memmove(destination_std, source, n);
	printf("Cadena de destino (memmove): %s\n", destination_std);
	return (0);
}*/