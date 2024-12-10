/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:22:01 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/10/30 10:12:19 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	i = 0;
	if (len_needle == 0)
		return ((char *)haystack);
	while (haystack[i] && len >= i + len_needle)
	{
		if (haystack[i] == needle [0])
		{
			if (ft_strncmp(haystack + i, needle, len_needle) == 0)
			{
				return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
