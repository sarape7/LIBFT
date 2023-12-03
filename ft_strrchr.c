/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:30:48 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/03 18:26:46 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int main ()
{
	const char	*s;
	int			c;
	char		*result;

	s = "teste";
	c = 'e';
	result = ft_strrchr(s, c);

	if(result != NULL)
		printf("El carácter '%c' se encontró por última vez en %ld\n",
			c, result - s);
	else
		printf("El carácter '%c' no se encontró.\n", c);
	return (0);
}*/