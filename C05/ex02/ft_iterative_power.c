/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:15:30 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/31 18:24:30 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*#include <stdio.h>
int main(){
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n",ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(2 ,-3));
	

}*/
