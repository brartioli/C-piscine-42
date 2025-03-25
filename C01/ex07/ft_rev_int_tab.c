/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:07:59 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/16 18:38:53 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swap = tab[start];
		tab[start] = tab[end];
		tab[end] = swap;
		start++;
		end--;
	}
}
/*#include	<stdio.h>
int main(void){
	int array[]={1, 2, 3, 4, 5};
	int tam = 5;
	ft_rev_int_tab(array, tam);
	for(int i = 0; i < tam; i++){
		printf("%i", array[i]);
	}

}*/
