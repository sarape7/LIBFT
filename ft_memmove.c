/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:13:21 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/02 18:58:04 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s)
		return (dst);
	if (s < d && s + len > d)
	{
		s += len;
		d += len;
		while (len--)
			*(--d) = *(--s);
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
/*
int	main()
{
	#include <stdio.h>
	char dst[] = "oldstring";
	const char src[]  = "newstring";

	printf("Before memmove dst = %s, src = %s\n", dst, src);
	memmove(dst, src, 9);
	printf("After memmove dst = %s, src = %s\n", dst, src);
	ft_memmove(dst, src, 9);
	printf("After ft_memmove dst = %s, src = %s\n", dst, src);
	return(0);
}
*/