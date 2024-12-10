/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:21:35 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/10/30 10:11:12 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ad;

	i = 0;
	ad = (unsigned char *)b;
	while (i < len)
	{
		*(ad + i) = (unsigned char )c;
		i++;
	}
	return (b);
}
