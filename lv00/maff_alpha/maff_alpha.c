/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 16:50:04 by cazheng           #+#    #+#             */
/*   Updated: 2018/05/24 16:52:52 by cazheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

int		main(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'B';
	while(a <= 'z' && b <= 'Z')
	{
		ft_putchar(a);
		ft_putchar(b);
		a += 2;
		b += 2;
	}
	ft_putchar('\n');
	return (0);
}
