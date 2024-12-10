/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:21:29 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/10/30 10:11:08 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src)
		return (dst);
	if (((char *)dst - (char *)src) < (long)len && (char *)src < (char *)dst)
	{
		while (len > 0)
		{
			len--;
			*(((unsigned char *)dst) + len) = *(((unsigned char *)src) + len);
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(((unsigned char *)dst) + i) = *(((unsigned char *)src) + i);
			i++;
		}
	}
	return (dst);
}
