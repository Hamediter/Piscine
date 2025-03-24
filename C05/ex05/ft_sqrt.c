/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:51:27 by aboutale          #+#    #+#             */
/*   Updated: 2024/09/25 10:43:45 by aboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{	
	int	j;	
	int	i;

	i = 1 ;
	while (i < nb)
	{	
		i++;
		j = i * i;
		if (j == nb)
			return (i);
		if (j > nb)
			return (0);
	}
	return (0);
}

int main()

{
	printf("%d", ft_sqrt(25));
	return(0);	
	


}

