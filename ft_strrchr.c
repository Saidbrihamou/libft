/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:50:56 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/10/30 17:16:39 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*lastchar;

	lastchar = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			lastchar = (char *)(&s[i]);
		}
		i++;
	}
	if (lastchar != 0)
		return (lastchar);
	if ((char)c == 0)
		return ((char *) &s[i]);
	return (0);
}
