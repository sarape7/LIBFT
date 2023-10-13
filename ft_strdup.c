/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:44:06 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 12:50:41 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = strlen(s1) + 1;
	str = (char *)malloc(len);
	if (str == NULL)
		return (NULL);
	return ((char *)memcpy(str, s1, len));
}
/*
int	main()
{
	char	*str;
	char	*dup;

	str = "Hello, world!";
    dup = ft_strdup(str);
	if (dup == NULL)
	{
		printf("Error: ft_strdup returned NULL\n");
		return (1);
	}
	printf("Original string: %s\n", str);
	printf("Duplicated string: %s\n", dup);
	free(dup);
	return (0);
}*/