/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 12:34:57 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/23 16:30:53 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (nb > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}
/*#include	<stdio.h>
int main (){
	char dest[10] = "oiii";
	char src[]= "abc";

	ft_strncat(dest, src, 1);
	printf("%s\n", dest);
	return (0);
}*/
