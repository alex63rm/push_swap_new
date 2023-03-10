/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:28:46 by alejarod          #+#    #+#             */
/*   Updated: 2023/02/24 22:57:30 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../srcs/push_swap.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
			i++;
	}
	return (i);
}
