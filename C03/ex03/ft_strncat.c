/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:18:29 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/23 17:47:12 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	o;

	i = 0;
	o = 0;
	while (dest[i] != '\0')
		i++;
	while (o < nb && src[o] != '\0')
	{
		dest[i] = src[o];
		o++;
		i++;
	}
//	dest[i] = '\0';
	return (dest);
}
 
int main()
 
{
	int nb = 8;
    char src[] = "commentva";
    char dest[12] = "salut ";
    ft_strncat(dest, src,nb);
    printf("a=%s, b=%s \n", src,dest);
    return(0);
 
}

