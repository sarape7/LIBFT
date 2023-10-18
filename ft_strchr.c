/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:40:05 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 13:19:15 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	while (*str != '\0')
	{
		if (*str == (char)character)
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
/*
int main()
{
	const char *str;
	int charToFind;
	char *result;

	str = "Hello, world";
	charToFind = 'w';
	result = ft_strchr(str, charToFind);
	if (result != NULL)
	{
		printf("El carácter '%c' se encontró en %ld\n", charToFind, result - str);
	}
	else
	{
		printf("El carácter '%c' no se encontró en la cadena.\n", charToFind);
	}
	return (0);
}*/