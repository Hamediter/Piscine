/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:54 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/23 21:50:33 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);

}
char *ft_strdup(char *src)
{
	int i;
	char *str2;

	i=0;

	str2 = (char *)malloc(sizeof(char) * ft_strlen(src)+1);
	
	while (src[i] != '\0')
		{
			str2[i] = src[i];
			i++;
		}
//		if(str2[i] == '\0')
//			return (NULL);
	return (str2);
}


int main()

{
	char src[8] ="bonjour";
	char *str2;	

	str2 = ft_strdup(src);

	printf("%s\n%s",src, str2);
	free(str2);
	return(0);

}


