/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:24:16 by sarperez          #+#    #+#             */
/*   Updated: 2023/09/20 11:45:14 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}
/*
int main() {
	char arreglo[10];
	ft_bzero(arreglo, sizeof(arreglo));
	for (size_t i = 0; i < sizeof(arreglo); i++)
	{
		printf("%d ", arreglo[i]);
	}
	return (0); //devuelve: 0 0 0 0 0 0 0 0 0 0 % 
}*/