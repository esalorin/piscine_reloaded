/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:36:38 by esalorin          #+#    #+#             */
/*   Updated: 2019/10/17 14:30:42 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int j;
	int a;

	j = 0;
	while (s1[j] == s2[j])
	{
		if (s1[j] == '\0')
			return (0);
		j++;
	}
	a = s1[j] - s2[j];
	return (a);
}

int		main(int argc, char **argv)
{
	int		i;
	int		count;

	count = 0;
	i = 1;
	if (argc == 1)
		return (0);
	while ((i + 1) < argc)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) <= 0)
			i++;
		else
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i++;
			count++;
		}
		if ((i + 1) == argc && count != 0)
		{
			count = 0;
			i = 1;
		}
	}
	ft_print(argc, argv);
	return (0);
}
