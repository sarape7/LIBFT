/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:49:03 by sarperez          #+#    #+#             */
/*   Updated: 2023/09/26 11:51:29 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

char	*ft_strnstr(const char	*haystack, const char *needle, size_t n)
{
	char	*result;

	result = strstr(haystack, needle);
	if (result && (size_t)(result - haystack) < n)
	{
		return (result);
	}
	else
	{
		return (NULL);
	}
}
/*
int main()
{
	const char	*haystack;
	const char	*needle;
	size_t		n;
	char		*result;

	haystack = "Hello, world!";
	needle = "world";
	n = 13;
	result = ft_strnstr(haystack, needle, n);
	if (result != NULL)
	{
		printf("'%s' se encontró  %ld\n ", needle, (size_t)(result - haystack));
	}
	else
	{
		printf("La subcadena '%s' no se encontró.\n", needle);
	}
	return (0);
}
*/
