/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:51:47 by sarperez          #+#    #+#             */
/*   Updated: 2023/11/28 13:52:17 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/*
int main()
{
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *joined_str = ft_strjoin(s1, s2);

    if (joined_str != NULL)
    {
        printf("%s\n", joined_str);
        free(joined_str);
    }
    else
    {
        printf("Error: Memory allocation failed\n");
    }

    return (0);
}
*/