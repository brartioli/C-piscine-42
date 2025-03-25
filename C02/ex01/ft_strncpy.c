/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:49:05 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/18 11:02:16 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include	<stdio.h>
#include	<string.h>
int main(){
	char src[] = "bruna";
	char dest[10];

	printf("antes: %s\n", src);

	ft_strncpy(dest, src, 10);
	printf("depois: %s\n", dest);
}*/
