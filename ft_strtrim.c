/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:41:46 by sarperez          #+#    #+#             */
/*   Updated: 2023/11/30 16:42:45 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
/*
int main ()
{
	char const	*s1;
	char const	*set;
	char		*trim;

	s1 = "Hola me llamo sara";
	set = "sara";

	trim = ft_strtrim(s1, set);
	if (trim)
	{
		printf("Trim string: '%s'\n", trim);
		free(trim);
	}
	else

		printf("Failed to allocate memory for trim string.\n");

	return (0);
}*/