/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:11:35 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/10/30 10:14:11 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	issep(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	countnewlen(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s1[i] && issep(s1[i], set))
		i++;
	if (!s1[i])
		return (0);
	while (s1[i])
	{
		len++;
		i++;
	}
	i--;
	while (s1[i] && issep(s1[i], set))
	{
		len--;
		i--;
	}
	return (len);
}

static void	cpytrim(char *dst, const char *s1, char const *set, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] && issep(s1[i], set))
		i++;
	if (!s1[i])
	{
		dst[0] = '\0';
		return ;
	}
	while (size - 1 > j)
	{
		dst[j] = s1[i];
		j++;
		i++;
	}
	dst[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	size = countnewlen(s1, set) + 1;
	newstr = (char *)malloc(size * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	cpytrim(newstr, s1, set, size);
	return (newstr);
}
