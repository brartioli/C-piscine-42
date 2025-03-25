/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:51:45 by bfernan2          #+#    #+#             */
/*   Updated: 2025/03/23 18:10:28 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		s = str;
		t = to_find;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/*#include	<stdio.h>
int main(){
	char src[]= "bolo de que? cenoura";
	char to_find[]="que";

	printf("%s\n", ft_strstr(src, to_find));


}*/
