/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:06:32 by lporto            #+#    #+#             */
/*   Updated: 2025/01/26 20:33:49 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_line(int x, int y, int fil, int col)
{
	if ((fil == 0 && col == 0) || (fil == 0 && col == x - 1)
		|| (col == 0 && fil == y - 1) || (fil == y - 1 && col == x - 1))
	{
		ft_putchar('o');
	}
	else if (col == 0 || col == x - 1)
	{
		ft_putchar('|');
	}
	else if (fil == 0 || fil == y - 1)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	fil;
	int	col;

	fil = 0;
	col = 0;
	while (fil < y)
	{
		col = 0;
		while (col < x)
		{
			write_line(x, y, fil, col);
			col++;
		}
		fil++;
		ft_putchar('\n');
	}
}

int	main(void)
{
	rush(10, 10);
	return (0);
}
