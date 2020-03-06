/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:07:40 by esalorin          #+#    #+#             */
/*   Updated: 2019/10/16 12:29:25 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *range;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	i = 0;
	range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
