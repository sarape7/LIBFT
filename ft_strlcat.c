/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:46:48 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/03 18:25:02 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copy_len;
	size_t	i;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (dstsize <= dest_len)
	{
		return (src_len + dstsize);
	}
	copy_len = dstsize - dest_len - 1;
	if (copy_len > 0)
	{
		i = 0;
		while (i < copy_len && src[i] != '\0')
		{
			dst[dest_len + i] = src[i];
			i++;
		}
		dst[dest_len + i] = '\0';
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
