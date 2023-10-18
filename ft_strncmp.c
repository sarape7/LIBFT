/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:00:06 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 13:19:33 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t n)
{
	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
int	main()
{
	const char	*str1;
	const char	*str2;
	size_t		n;
	int			result;

	str1 = "Hello, world!";
	str2 = "Hello, universe!";
	n = 6;
	result = ft_strncmp(str1, str2, n);
	if (result == 0)
	{
		printf("Las cadenas son iguales en los primeros %zu caracteres.\n", n);
	}
	else if (result < 0)
	{
		printf("La primera cadena es menor que la segunda.\n");
	}
	else
	{
		printf("La primera cadena es mayor que la segunda.\n");
	}
	return (0);
}*/