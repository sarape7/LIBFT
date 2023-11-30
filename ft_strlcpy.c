/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:45:36 by sarperez          #+#    #+#             */
/*   Updated: 2023/11/30 17:58:56 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

/*
int main()
{
    char dst[50];
    const char *src = "Hello, world!";
    size_t dstsize = 20;
    size_t result;

    result = ft_strlcpy(dst, src, dstsize);
    printf("Copied string: %s\n", dst);
    printf("Length of source string: %zu\n", result);

    return 0;

}*/