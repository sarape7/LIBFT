/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:26:48 by sarperez          #+#    #+#             */
/*   Updated: 2023/11/30 13:35:45 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*t;

	t = malloc(count * size);
	if (!t)
		return (NULL);
	ft_bzero(t, count * size);
	return (t);
}

/*
int main()
{
	int		*p;
	int		r;
	int		i;

	r = 6;
	p = ft_calloc(r, sizeof(int));
	i = 0;
	while (r > i)
	{
		printf("%d", p[i]);
		i++;
	}
}
*/