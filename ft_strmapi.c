/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:06:53 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/02 15:39:25 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fillstr(char *str, char const *s,
char (*f)(unsigned int, char), unsigned int i)
{
	if (s[i])
	{
		str[i] = f(i, s[i]);
		ft_fillstr(str, s, f, i + 1);
	}
	else
		str[i] = '\0';
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_fillstr(str, s, f, 0);
	return (str);
}

/*
#include <stdio.h>

char my_func(unsigned int i, char c)
{
    return (i % 2) ? c : c - 32; // Convert every second character to uppercase
}

int main()
{
    char const *s = "hello world";
    char *str;

    str = ft_strmapi(s, my_func);
    if (str)
    {
        printf("Original string: '%s'\n", s);
        printf("Transformed string: '%s'\n", str);
        free(str);
    }
    else
    {
        printf("Failed to allocate memory for transformed string.\n");
    }

    return 0;
}*/
