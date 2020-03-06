/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:07:04 by esalorin          #+#    #+#             */
/*   Updated: 2019/10/16 12:32:02 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 1 || nb > 12)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
