/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:30:48 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 13:21:53 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int character)
{
	char	*lastoccurrence;

	lastoccurrence = NULL;
	while (*str != '\0')
	{
		if (*str == (char)character)
		{
			lastoccurrence = (char *)str;
		}
		str++;
	}
	if (character == '\0')
	{
		return ((char *)str);
	}
	return (lastoccurrence);
}
/*
int main ()
{
	const char *str;
	int			chartofind;
	char		*result;
	str = "Hello, world!";
	chartofind = 'o';
	result = ft_strrchr(str, chartofind);
	if(result != NULL)*/
/*		printf("El carácter '%c' se encontró por última vez en %ld\n",
		chartofind, result - str);*//*
	else
		printf("El carácter '%c' no se encontró en.\n", chartofind);
	return (0);
}*/