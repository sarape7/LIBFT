/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:32:24 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/18 16:56:52 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[i] = '\0';
		return (str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	str[len] = '\0';
	return (str);
}
/*
int	main()
{
	char			*str = "hola";
	unsigned int	start = 2;
	size_t			l = 3;
	char			*buffer;

	buffer = ft_substr(str, start, l);
	printf("%s\n", buffer);
}*/