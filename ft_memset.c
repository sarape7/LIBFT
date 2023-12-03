/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:59:49 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/03 18:22:26 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	*end;

	p = b;
	end = p + len;
	while (p < end)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (b);
}
/*
int	main()
{
	char arreglo[10];
	int valor = 42;
	size_t longitud = 10;
	ft_memset(arreglo, valor, longitud);
	for (size_t i = 0; i < longitud; i++)
	{
		printf("%d ", arreglo[i]);
	}
	return (0);
}*/
