/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:15:11 by esalorin          #+#    #+#             */
/*   Updated: 2019/10/15 15:43:49 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int x;

	x = 0;
	while ((x * x) <= nb)
	{
		if ((x * x) == nb)
			return (x);
		x++;
	}
	return (0);
}