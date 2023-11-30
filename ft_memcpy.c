/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:50:11 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 17:50:58 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;

	d = (char *)dest;
	s = (const char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

/*
int main()
{
	char source[] = "Hello, world!";
	char destination[20];
	size_t n = 13;
	ft_memcpy(destination, source, n);
	printf("Cadena de destino: %s\n", destination);
	return (0);
}*/