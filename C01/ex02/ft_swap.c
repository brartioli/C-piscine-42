/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:09:54 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/15 16:43:22 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include	<stdio.h>
int	main(void){
	int a;
	int b;
	a = 5;
	b = 10;
	ft_swap(&a, &b);
	printf("%i\n%i", a, b);

}*/
