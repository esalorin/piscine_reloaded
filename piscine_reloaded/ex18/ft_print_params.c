/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:19:34 by esalorin          #+#    #+#             */
/*   Updated: 2019/10/15 16:38:11 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_params(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 0)
		ft_print_params(argc, argv);
	return (0);
}
