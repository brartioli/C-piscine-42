/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:53:26 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/16 16:48:08 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*#include	<stdio.h>
int main(){
	int a = 10;
	int b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d", a, b);
	return 0;
}*/
