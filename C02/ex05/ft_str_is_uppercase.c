/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:27:29 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/18 15:35:50 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include	<stdio.h>
int main(){
	printf("%d\n", ft_str_is_uppercase("ADE")); //return 1
	printf("%d\n", ft_str_is_uppercase("asdg*&")); //return 0
	printf("%d\n", ft_str_is_uppercase("")); //return 1
}*/
