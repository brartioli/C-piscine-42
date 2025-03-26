/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:46:14 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/24 17:56:38 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		ft_putchar('-');
		nbl = -nbl;
	}
	if (nbl >= 10)
	{
		ft_putnbr(nbl / 10);
		ft_putnbr(nbl % 10);
	}
	else
	{
		ft_putchar(nbl + 48);
	}
}
/*#include	<stdio.h>
int main(){
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-12345);
	return (0);
}*/
