/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:28:20 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/18 11:26:12 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *uno, const char *dos, size_t n)
{
	size_t	dos_len;
	size_t	i;

	if (*dos == '\0')
		return ((char *)uno);
	dos_len = strlen(dos);
	i = 0;
	while (*uno && i + dos_len <= n)
	{
		if (*uno == *dos && ft_memcmp(uno, dos, dos_len) == 0)
			return ((char *)uno);
	uno++;
	i++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char	*s;
	const char	*dos;
	size_t		n;
	char		*result;

s = "Hello, world!";
dos = "world";
n = 13;
result = ft_strnstr(s, dos, n);

	if (result != NULL)
		printf("'%s' se hayó en la posición %ld\n", dos, (size_t)(result - s));
	else
		printf("La subcadena '%s' no se encontró.\n", dos);
	return (0);
}*/
