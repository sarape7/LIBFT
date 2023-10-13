/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:46:48 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 09:56:28 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t	ft_strlen(const char	*str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copy_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (size <= dest_len)
	{
		return (src_len + size);
	}
	copy_len = size - dest_len - 1;
	if (copy_len > 0)
	{
		i = 0;
		while (i < copy_len && src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (total_len);
}
/*
int	main(void)
{
	char	destination[20] = "Hello, ";
	char source[] = "world!";
	size_t result = ft_strlcat(destination, source, sizeof(destination));
	printf("Concatenated string: %s\n", destination);
	printf("Total length: %zu\n", result);
	return (0);
}*/
