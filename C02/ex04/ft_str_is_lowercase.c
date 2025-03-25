/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:38:39 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/18 15:18:58 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include	<stdio.h>
int main(){
	printf("%d\n", ft_str_is_lowercase("abcdfg")); //return 1
	printf("%d\n", ft_str_is_lowercase("asdAAb")); //return 0
	printf("%d\n", ft_str_is_lowercase("345")); //return 0
}*/
