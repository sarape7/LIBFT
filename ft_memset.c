/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:59:49 by sarperez          #+#    #+#             */
/*   Updated: 2023/09/20 11:19:14 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	*end;

	p = ptr;
	end = p + num;
	while (p < end)
	{
		*p = (unsigned char)value;
		p++;
	}
	return (ptr);
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
