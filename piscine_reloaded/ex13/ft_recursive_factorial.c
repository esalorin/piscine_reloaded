/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:10:51 by esalorin          #+#    #+#             */
/*   Updated: 2019/10/16 13:35:00 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 1 || nb > 12)
		return (0);
	else if (nb > 1)
	{
		res = nb * ft_recursive_factorial(nb - 1);
	}
	return (res);
}
