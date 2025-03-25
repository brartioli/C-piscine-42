/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:12:42 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/21 14:57:29 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include	<stdio.h>
int main(){
	char src[] = "hello wold!";
	char dest[15];
	printf("origem: %s\n", src);
	ft_strcpy(dest, src);
	printf("destino: %s\n", dest);
	return 0;
}*/
