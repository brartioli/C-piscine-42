/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:45:03 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/18 16:09:10 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include	<stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_printable("oi!@#$")); //return 1
	printf("%d\n", ft_str_is_printable("\n")); //return 0
	printf("%d\n", ft_str_is_printable("")); //return 1
}*/
