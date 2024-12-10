/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:55:21 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/10/30 17:39:21 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skep_and_singe(int *i, const char *str)
{
	int	singe;

	singe = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
		{
			singe = -1;
		}
		(*i)++;
	}
	return (singe);
}

int	ft_atoi(const char *str)
{
	int			singe;
	int			i;
	long long	resulat;
	long long	temp;

	resulat = 0;
	temp = 0;
	i = 0;
	singe = skep_and_singe(&i, str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp *= 10;
		temp += str[i] - '0';
		if (temp / 10 < resulat)
		{
			if (singe == -1)
				return (0);
			else
				return (-1);
		}
		resulat = temp;
		i++;
	}
	return (resulat * singe);
}
