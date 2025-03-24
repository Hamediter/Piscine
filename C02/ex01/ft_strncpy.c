/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:33:21 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/20 11:12:45 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i ;

	i = 0;
	while (i < n && src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}

	while(i <= n)
	{
		dest[i]= '\0';
		i++;
	}

	
	return (dest);
}


int main(void) 

{
	int n;

	n = 1;

	char dest[]= "sal";
	char src[] = "Bojjn";
	ft_strncpy(dest, src, n);
	printf("a= %s, b= %s\n", src, dest); 
	return(0);
}

