/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:35:40 by ide-abre          #+#    #+#             */
/*   Updated: 2025/01/26 15:54:37 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw_line(int x, int y, int i, int j)
{
	if (j == 0 || j == y - 1)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (i == 0 || i == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 | y <= 0)
	{
		return ;
	}
	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			draw_line(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
}

int	main(void)
{
	rush(10, 10);
	return (0);
}
