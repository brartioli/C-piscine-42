/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:01:26 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/31 17:16:50 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{	
	int	res;

	if (nb <= 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	res = 1;
	while (res < nb / res)
	{
		res++;
	}
	if (res == nb / res && nb % res == 0)
	{
		return (res);
	}
	return (0);
}
/*#include	<stdio.h>
int main ()
{
	int num = 2147395600;
	printf("%d\n", ft_sqrt(num));
	return (0);


}*/
