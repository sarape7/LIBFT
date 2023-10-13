/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:45:36 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 10:03:08 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		src_len;
	size_t		copy_len;
	const char	*src_ptr;
	char		*dest_ptr;

	src_len = ft_strlen(src);
	if (src_len < size - 1)
		copy_len = src_len;
	else
		copy_len = size - 1;
	src_ptr = src;
	dest_ptr = dest;
	while (copy_len > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		copy_len--;
	}
	*dest_ptr = '\0';
	return (src_len);
}
/*
int main()
{
	char	source[] = "Hello, world!";
	char destination[20];
	size_t copied = ft_strlcpy(destination, source, sizeof(destination));
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	printf("Copied characters: %zu\n", copied);
	return (0);
}*/