/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:55:36 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/10/30 17:08:58 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	index;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	size = ft_strlen(s) + 1;
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	index = 0;
	while (size - 1 > index)
	{
		str[index] = (*f)(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
