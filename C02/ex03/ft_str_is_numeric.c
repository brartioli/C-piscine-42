/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:17:26 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/18 15:26:36 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9' )
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include	<stdio.h>
int main(){
	printf("%d\n", ft_str_is_numeric("1234")); //return 1
	printf("%d\n", ft_str_is_numeric("bruna")); //return 0
	printf("%d\n", ft_str_is_numeric("")); //return 1
	return (0);
}*/
