/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:19:42 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/31 19:59:25 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (nb == 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power -1));
}
/*#include	<stdio.h>
int main ()
{
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n",ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(2 ,-3));
}*/
