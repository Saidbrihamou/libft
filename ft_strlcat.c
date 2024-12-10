/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:21:43 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/11/02 15:00:54 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lent_dst;

	lent_dst = ft_strlen(dst);
	i = 0;
	if (dstsize <= lent_dst)
		return (ft_strlen(src) + dstsize);
	while (src[i] && (dstsize - 1 > i + lent_dst))
	{
		dst[i + lent_dst] = src[i];
		i++;
	}
	dst[i + lent_dst] = '\0';
	return (lent_dst + ft_strlen(src));
}
