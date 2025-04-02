/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:06:53 by bfernan2          #+#    #+#             */
/*   Updated: 2025/04/01 11:35:55 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	div = 3;
	while (div * div <= nb)
	{
		if (nb % div == 0)
			return (0);
		div = div + 2;
	}
	return (1);
}
/*#include	<stdio.h>
int main()
{
	int num = 27;
	printf("%d\n", ft_is_prime(num));
	return (0);
}*/
