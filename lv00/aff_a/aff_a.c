/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 22:54:27 by cazheng           #+#    #+#             */
/*   Updated: 2018/05/23 23:10:53 by cazheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_a(char *str)
{
	int		i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_aff_a(argv[1]);
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
