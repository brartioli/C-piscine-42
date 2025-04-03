/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:24:37 by aalves-f          #+#    #+#             */
/*   Updated: 2025/03/15 11:59:42 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int y, int x);
void	ft_putchar(char c);
void	test_col(int row, int col, int x, int y);

void	test_col(int row, int col, int x, int y)
{
	while (col <= y)
	{
		if ((row == 1 && col == 1) || (row == 1 && col == y))
		{
			ft_putchar('A');
		}
		else if ((row == x && col == 1) || (row == x && col == y))
		{
			ft_putchar('C');
		}
		else if (row == 1 || col == 1 || row == x || col == y)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		col++;
	}
}

void	rush(int y, int x)
{	
	int	row;
	int	col;

	row = 1;
	while (row <= x)
	{
		col = 1;
		test_col(row, col, x, y);
		ft_putchar('\n');
		row++;
	}
}
