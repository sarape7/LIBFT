/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:06:53 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/03 17:52:30 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	result = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s, ft_strlen(s)+1);
	while (result[i])
	{
		result[i] = (*f)(i, result[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char	funcion(unsigned int a, char c)
{
	return (a + c);
}

int	main()
{
	char	*s = "AAAA";
	char	*result;

	printf("Original String: %s\n", s);
	result = ft_strmapi(s, &funcion);
	if (result != NULL)
	{
		printf("Mapped String: %s\n", result);
		free(result);
	}
	else
		printf("Error: ft_strmapi returned NULL.\n");
	return (0);
}
*/